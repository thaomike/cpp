#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<int> > ke;
    ke.resize(n+1);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int tmp;
            cin>>tmp;
            if(tmp != 0)
            {
                ke[i].push_back(j);
            }
        }
    }
    for(int i=1;i<ke.size();i++)
    {
        for(int j=0;j<ke[i].size();j++)
        {
            cout<<ke[i][j]<<" ";
        }
        cout<<endl;
    }
}