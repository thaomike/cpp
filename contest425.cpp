#include<bits/stdc++.h>
using namespace std;
int n,k;
long long f[92];

void fibo()
{
    f[0]=0;
    f[1] = 1;
    for(int i=2;i<93;i++) f[i] = f[i-1] + f[i-2];
}

void Try(int n, int k)
{
    if(k == 1) cout<<"A";
    if(k == 2) cout<<"B";
    while (f[n] > k)
    { 
        n--;
    }
    
    
}

int main()
{
    int t;
    cin>>t;
    fibo();
    while (t--)
    {
        cin>>n>>k;

    }
    
}