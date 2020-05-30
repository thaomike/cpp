#include<bits/stdc++.h>
using namespace std;
int n,m,p;
int an[102], am[102];

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>m>>p;
        for(int j=0;j<n;j++) cin>>an[j];
        for(int j=0;j<m;j++) cin>>am[j];
        
        cout<<"Test "<<i<<":\n";
        for(int j=0;j<p;j++)
        {
            cout<<an[j]<<" ";
        }
        for(int j=0;j<m;j++) cout<<am[j]<<" ";
        for(int j=p;j<n;j++) cout<<an[j]<<" ";
        cout<<endl;
    }
}
