#include<bits/stdc++.h>
using namespace std;
int a[100000];
int lower_bound(int dau,int cuoi,int key){
	int vt=-1;
	while(dau<=cuoi){
		int mid=(dau+cuoi)/2;
		if(a[mid]>key){
			cuoi=mid-1;
		}
		else if(a[mid]<key){
			vt=mid;
			dau=mid+1;
		}
		else return mid-1;
	}
	return vt;
}
int main(){
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	int dem=0;
	for(int i=0;i<n-1;i++){
		int tmp=lower_bound(i+1,n-1,a[i]+k);
		if(tmp!=-1){
            dem+=tmp-i;
        }
	}
	cout<<dem;
	return 0;
}

