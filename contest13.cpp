#include<bits/stdc++.h>
using namespace std;

int n,a[1003];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        bool flag = true;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=n;i>1;i--)
        {
            if(a[i]>a[i-1])
            {
                for(int j=n;j>=i;j--)
                {
                    if(a[i-1]<a[j])
                    {
                        swap(a[i-1],a[j]);
                        break;
                    }
                }
                for(int j=i;j<=(i+n)/2;j++)
                {
                    swap(a[j],a[n-j+i]);
                }
                flag = false;
                break;
            }
        }
        if(flag) 
        {
            for(int i=1;i<=n;i++)
            {
                a[i] = i;
            }
        }
        for(int i=1;i<=n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}