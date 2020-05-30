#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[11];
vector<int> res;
vector< vector<int> > d;


void out() {
    int s=0;
    vector<int> aa;
    aa.clear();
    for(int i=0;i<n;i++)
    {
        s += res[i]*a[i];
        if(res[i] == 1) aa.push_back(a[i]);
    }
    
    if(s == k && aa.size())
    {
        // sort(aa.begin(),aa.end());
        d.push_back(aa);
    }
}

void sinh(int i)
{
    if(i == n)
    {
        out();
    }
    else
    {
        for(int j=0;j<2;j++)
        {
            res[i] = j;
            sinh(i+1);
        }
    }
    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        d.clear();
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        res.resize(n);
        // for(int i=0;i<n;i++) cout<<res[i];

        sinh(0);
        sort(d.begin(),d.end());

        if(d.size() == 0)
        {
            cout<<-1;
        }
        else
        {
            for(int i=0;i<d.size();i++)
            {
                cout<<'[';
                for(int j=0;j<d[i].size()-1;j++)
                {
                    cout<<d[i][j]<<' ';
                }
                cout<<d[i][d[i].size()-1]<<"] ";
            }
        }
        cout<<endl;
    }
}