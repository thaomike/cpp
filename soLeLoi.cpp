#include<bits/stdc++.h>
using namespace std;
long long x;
vector<long long> a;
long long res;

int main()
{
    while(cin>>x)
    {
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    if(a.size() == 1)
    {
        cout<<a[0];
        return 0;
    }
    int l=0;
    for(int i=1;i<a.size();i++)
    {
        if(a[i] != a[i-1])
        {
            if(l != 2) 
            {
                cout<<a[i-1];
                return 0;
            }
            else
            {
                l = 1;
            }
        }
        else
        {
            l = 2;
        }
    }
    if(l == 1) cout<<a[a.size()-1];

}