#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
bool flag = false;
vector<vector<int> > d;
void process()
{
    flag = true;
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
    if(flag) return;

    d.push_back(a);

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        flag = false;
        a.clear();
        a.resize(n+1);
        d.clear();
        for(int i=1;i<=n;i++)
        {
            a[i] = i;
        }

        d.push_back(a);

        while(!flag)
        {
            process();
        }
        for(int i=d.size()-1;i>=0;i--)
        {
            for(int j=1;j<=n;j++) cout<<d[i][j];
            cout<<" ";
        }   
        cout<<endl;
    }
}