#include<bits/stdc++.h>
using namespace std;
int n;

struct job
{
    int f,s;
};

bool cmp(job a, job b)
{
    return (a.f<b.f||(a.f == b.f && a.s<b.s));
}

job data[101];

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int f[101];
        memset(f,0,sizeof(f));
        for(int i=0;i<n;i++) 
        {
            cin>>data[i].f>>data[i].s;
        }
        sort(data,data+n,cmp);
        for(int i=0;i<n;i++)
        {
            f[i] = 1;
            for(int j=0;j<i;j++)
            {
                
                if(data[i].f > data[j].s)
                {
                    // if(i == 1 && j == 0) cout<<"d";
                    f[i] = max(f[i],f[j]+1);
                    // cout<<f[j]+1;
                }
            }
        }
        int ma = 0;
        for(int i=0;i<n;i++)
        {
            // cout<<f[i];
            ma = max(ma,f[i]);
        }
        cout<<ma<<endl;
    }
    
}