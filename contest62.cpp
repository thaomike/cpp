#include<bits/stdc++.h>
using namespace std;
int n,x;

struct data
{
    int id, valFake;
};

bool cmp (data a, data b)
{
    return (a.valFake < b.valFake ||(a.valFake == b.valFake && a.id < b.id));
}

data arr[100005];
int arr1[(int)1e6];

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>x;
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
            arr[i].id = i;
            arr[i].valFake = abs(arr1[i]-x);
        }
        sort(arr,arr+n,cmp);
        for(int i=0;i<n;i++)
        {
            cout<<arr1[arr[i].id]<<" ";
        }
        cout<<endl;
    }
    
}