#include<bits/stdc++.h>
using namespace std;

int n;
int a[100005],b[100005];


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        bool flag = true;
        for(int i=0;i<n;i++) 
        {
            cin>>a[i];
            b[i] = a[i];
        }
        sort(b,b+n);
        // for(int i=0;i<n;i++) cout<<b[i]<<" ";
        vector<int> d;
        d.clear();
        for(int i=1;i<n;i++)
        {
            if((b[i] == b[i-1]) && (d.empty()||d[d.size()-1] != b[i]))
            {
                d.push_back(b[i]);
                // cout<<b[i]<<" ";
            }
        }
        for(int i=0;i<n;i++)
        {
            int x = lower_bound(d.begin(),d.end(),a[i]) - d.begin();
            if(x >=0 && x<d.size() && d[x] == a[i])
            {
                cout<<a[i]<<endl;
                flag = false;
                break;
            }
        }
        if(flag) cout<<"NO\n";
    }
}