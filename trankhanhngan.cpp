#include<iostream>
using namespace std;
int t, a[10],isTrue;
void Try(int i, int s){
	for(int j=1;j<=3;j++){
		if(j==1) s+=a[i];
		else if(j==2) s-=a[i];
		else s*=a[i];
		
		if(i==4&&s==23){
			isTrue=1;
			break;
		}
		else Try(i+1,s);
		
		if(j==1) s-=a[i];
		else if(j==2) s+=a[i];
		else s/=a[i];
	}
}
int main(){
	cin>>t;
	while(t--){
		isTrue=0;
		for(int i=0;i<=4;i++) cin>>a[i];
		Try(1,a[0]);
		if(isTrue) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
