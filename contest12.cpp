#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[1003];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        bool flag = true;
        cin>>n>>k;
        for(int i=1;i<=k;i++)
        {
            cin>>a[i];
        }
        for(int i=k;i>=1;i--)
        {
            if(a[i] < n-k+i)
            {
                a[i]++;
                for(int j=i+1;j<=k;j++)
                {
                    a[j] = a[j-1] + 1; 
                }
                flag = false;
                break;
            }
        }
        if(flag)
        {
            for(int i=1;i<=k;i++)
            {
                a[i] = i;
            }
        }
        for(int i=1;i<=k;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}