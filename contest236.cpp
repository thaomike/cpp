#include<bits/stdc++.h>
using namespace std;
int a[5];
vector<vector<int> > tp, hv;
vector<int> tmp;
bool check[6] = {};
bool flag;

void sinhTamPhan(int i)
{
    if(i == 4)
    {
        tp.push_back(tmp);
    }
    else
    {
        for(int j=0;j<3;j++)
        {
            tmp.push_back(j);
            sinhTamPhan(i+1);
            tmp.pop_back();
        }
    }
    
}

void sinhHoanVi(int i)
{
    if(i==5)
    {
        hv.push_back(tmp);
    }
    else
    {
        for(int j=0;j<5;j++)
        {
            if(!check[j])
            {
                check[j] = true;
                tmp.push_back(j);
                sinhHoanVi(i+1);
                check[j] = false;
                tmp.pop_back();
            }
        }
    }
    
}

void process()
{
    for(int i=0;i<hv.size();i++)
    {
        for(int j=0;j<tp.size();j++)
        {
            int x = hv[i][0];
            long long s = a[x];   
            for(int k=0;k<tp[j].size();k++)
            {
                if(tp[j][k] == 0)
                {
                    s += a[hv[i][k+1]];
                }
                else if(tp[j][k] == 1)
                {
                    s -= a[hv[i][k+1]];
                }
                else
                {
                    s *= a[hv[i][k+1]];
                }                
            }
            if(s == 23)
            {
                flag = true;
                cout<<"YES\n";
                return;
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    sinhHoanVi(0);
    sinhTamPhan(0);
    while(t--)
    {
        flag = false;
        for(int i=0;i<5;i++) cin>>a[i];
        process();
        if(!flag) cout<<"NO\n";
    }
}