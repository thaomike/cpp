#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[1003];
bool flag = false;

void process()
{
    flag =true;
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
    
    if(flag) return;
    for(int i=1;i<=k;i++)
    {
        cout<<a[i];
    }
    cout<<" ";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        flag = false;
        for(int i=1;i<=k;i++){
            a[i] = i;
            cout<<a[i];
        }
        cout<<" ";
        while(!flag)
        {
            process();
        }
        cout<<endl;
    }
}