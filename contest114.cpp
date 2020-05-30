#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[1003], b[1003];
bool flag = false;
vector<int> d;

void process()
{
    for(int i=k;i>=1;i--)
    {
        if(a[i] < n-k+i)
        {
            b[i] = a[i]+1;
            for(int j = i+1;j<=k;j++)
            {
                b[j] = b[j-1]+1;
            }
            flag = true;
            break;
        }
    }
    if(flag) for(int i=1;i<=k;i++) d[b[i]]++;
}

int res()
{
    int tmp = 0;
    if(!flag) return k;
    for(int i=1;i<=n;i++)
    {
        if(d[i] == 2) 
        {
            tmp++;
        }
    }
    return (k-tmp);
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        d.clear();
        d.resize(n+1);
        flag = false;
        for(int i=1;i<=k;i++) 
        {
            cin>>a[i];
            b[i] = a[i];
            d[a[i]] = 1;
        }
        process();
        cout<<res()<<endl;
    }
}