#include<iostream>
#include<algorithm>
using namespace std;
int t,n,m, a[1000000], b[1000000];
int Partition(int a[], int l, int h){
	int i=l-1;
	for(int j=l;j<h;j++){
		if(a[j]<a[h]){
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[h]);
	return i+1;
}
void quickSort(int a[],int l, int h){
	if(l<h){
		int p=Partition(a,l,h);
		quickSort(a,l,p-1);
		quickSort(a,p+1,h);
	}
}
int main(){
	cin>>t;
	long long res;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<n;i++) cin>>a[i];
		quickSort(a,0,n-1);
		for(int i=0;i<m;i++) cin>>b[i];
		quickSort(b,0,m-1);
		res=(long long)a[n-1]*b[0];
		cout<<res<<endl;
	}
}