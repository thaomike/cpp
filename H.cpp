#include<bits/stdc++.h>
using namespace std;
int check[100]={0};
int n;
int a[21];

void in(){
	cin>>n;
}

void out(){
	for(int h=1;h<=n+n;h++){
		cout<<a[h]<<" ";
	}
	cout<<endl;
}

bool prime(int x){
	if(x<2) return false;
	for(int u=0;u<=sqrt(x);u++){
		if(x%u==0) return false;
	}
	return true;
}

void Try(int i){
	for(int j=1;j<=n+n;j++){
		if(check[j]==0){
			a[i]=j;
			check[j]=1;
			if(i==n+n){
				out();
			}
			else{
				if(i==1) Try(i+1);
				else if(prime(a[i]+a[i-1])==true&&a[1]==1) Try(i+1);
			} 
			check[j]=0;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    in();
    Try(1);
    
	return 0;
}
