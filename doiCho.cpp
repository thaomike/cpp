#include<bits/stdc++.h>
using namespace std;
int t;
string s;

string Try(){
	for(int i=s.size()-1;i>=1;i--){
		if(s[i-1]>s[i]){
			for(int j=s.size()-1;j>=i;j--){
				if(s[j]<s[i-1] && s[j] != s[j-1]){
					swap(s[j], s[i-1]);
					if(s[0]=='0') return "-1";
				        else
			                    return s;
				} 	
			}	
		}
	}
	return "-1";
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
    	cin>>s;
    	cout<<Try()<<endl;
	}
    
	return 0;
}
