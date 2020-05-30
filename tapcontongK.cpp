#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[101];
int n, k,t,stop=0;
int f[10004];
//f[0] = 1;

void Try(int kk, int i){
//	if(f[kk] == 1) return f[kk];
	for(int j=i;j<n;j++)
	{
		if(kk>=a[j])
		{
			if(f[kk-a[j]] == 1) f[kk] = 1;
			else Try(kk-a[i],j);
		}
		
	}
	
	
}
int main(){
ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
    	stop=0;
    	cin>>n>>k;
//    	for(int i=0;i<k;i++) f[i] = 0;
		memset(f,0,10004);
    	f[0] = 1;
    	for(int i=0;i<n;i++)
    		cin>>a[i];
    	Try(k,0);
    	if(f[k] == 1) cout<<"YES\n";
    	else cout<<"NO\n";
    }

	return 0;
}
