#include<bits/stdc++.h>
using namespace std;
int n,p,s,res;
vector<int> snt,tmp;
vector<vector<int> > r;


void PrePro()
{
    snt.push_back(2);

    for(int i=3;i<200;i+=2)
    {
        bool flag = true;
        for(int j=2;j*j<=i;j++)
        {
            if(i%j == 0) flag = false;
        }
        if(flag) snt.push_back(i);
    }
}

void process(int i, int sum, int limit)
{
    if(i == 0 && sum == s)
    {
        res++;
        r.push_back(tmp);
        // tmp.clear();s
    }
    else
    {
        for(int j=0;j<snt.size();j++)
        {
            if(snt[j] > limit)
            {
                if(sum + snt[j] <= s)
                {
                    tmp.push_back(snt[j]);
                    process(i-1,sum+snt[j],snt[j]);
                    tmp.pop_back();
                }
            }
        }
    }
    
}

int main() {
    int t;
    cin>>t;
    PrePro();

    while(t--)
    {
        cin>>n>>p>>s;
        res = 0;
        r.clear();
        process(n,0,p-1);
        cout<<r.size()<<endl;
        for(int i=0;i<r.size();i++)
        {
            for(int j=0;j<r[i].size();j++)
            {
                cout<<r[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}