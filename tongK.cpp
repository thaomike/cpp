	#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[101];
int n, k,t,stop=0;
int s[101];
 
void Try(int i, int res){
	if(res==k){
		cout<<"YES"<<endl;
		stop=1;
		return;
	}
	else{
		for(int j=i;j<n;j++){
//			if(stop == 1) break;
			if(res+a[j]<=k &&stop == 0 && res+s[j]-a[j]>=k){
				res+=a[j];
				Try(j+1, res);
				res-=a[j];
			}
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
    	for(int i=0;i<n;i++)
    		cin>>a[i];
//    	sort(a,a+n,greater<int>());
    	s[n-1] = a[n-1];
    	for(int i=n-2;i>=0;i--) s[i] = a[i] + s[i+1];
    	Try(0,0);
    	if(stop==0) cout<<"NO"<<endl;
    }
    
	return 0;
} 
