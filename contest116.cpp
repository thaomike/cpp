#include<bits/stdc++.h>
using namespace std;
int n,s;
vector< vector<int> > d;
vector<int> a;
bool stop = false;
int init[11][11];
vector<vector<int> > dd;


void preProcessor() {
    while(!stop)
    {
        d.push_back(a);
        stop = true;
        for(int i=n;i>1;i--)
        {
            if(a[i] > a[i-1])
            {   
                for(int j=n;j>=i;j--)
                {
                    if(a[i-1] < a[j])
                    {
                        swap(a[j],a[i-1]);
                        sort(a.begin()+i,a.end());
                        break;
                    }
                }
                stop = false;
                break;
            }
        }
    }
}


int main() {
    cin>>n>>s;
    a.resize(n+1);
    for(int i=1;i<=n;i++) a[i] = i;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++) cin>>init[i][j];
    }
    preProcessor();
    int tmp = 0;
    int res = 0;
    for(int i=0;i<d.size();i++)
    {
        for(int j=1;j<d[i].size();j++)
        {
            tmp += init[j][d[i][j]];
        }
        if(tmp == s)
        {
            res++;
            dd.push_back(d[i]);  
        } 
        tmp=0;
    }
    cout<<res<<endl;
    for(int i=0;i<dd.size();i++)
    {
        for(int j=1;j<dd[i].size();j++)
        {
            cout<<dd[i][j]<<" ";
        }
        cout<<endl;
    }
}