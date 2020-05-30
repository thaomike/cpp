#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[11];
vector<int> tmp;
vector< vector<int> > res, kqua;

void Try(int i)
{
    if(i == 10)
    {
        res.push_back(tmp);
    }
    else
    {
        for(int j=0;j<2;j++)
        {
            tmp[i] = j;
            Try(i+1);
        }
    }
}

int power(int n)
{
    int res = 1;
    for(int i=0;i<n;i++) res *= 2;
    return res;
}

void process()
{
    int s=0;
    vector<int> kquaA;
    for(int i=0;i<power(n);i++)
    {
        s = 0;
        kquaA.clear();
        for(int j=9;j>=10-n;j--)
        {
            s += res[i][j]*a[10-j-1];
            if(res[i][j]) kquaA.push_back(a[9-j]);
            if(s > k) break;
        }
        if(s == k) kqua.push_back(kquaA);
    }
}

int main() {
    int t;
    cin>>t;
    tmp.resize(10);
    Try(0);
    // sort(res.begin(),res.end());
    // cout<<res.size()<<endl;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<res[i].size();j++) cout<<res[i][j];
        cout<<endl;
    }

    while(t--)
    {
        cin>>n>>k;
        kqua.clear();
        // cout<<kqua.size();
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        process();

        sort(kqua.begin(),kqua.end());

        for(int i=0;i<kqua.size();i++)
        {
            cout<<"[";
            for(int j=0;j<kqua[i].size()-1;j++)
            {
                cout<<kqua[i][j]<<" ";
            }
            cout<<kqua[i][kqua[i].size()-1]<<"] ";
        }

        if(kqua.size() == 0) cout<<-1;
        cout<<endl;
    }
}