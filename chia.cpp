#include<bits/stdc++.h>
using namespace std;
int a[100005];

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        priority_queue<int, vector<int>, greater<int> > q1,q2;
        long long s=0;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%3 == 1)
                q1.push(a[i]);
            if((a[i]))
            s+=a[i];
        }
        sort(a,a+n);
        if(s%3 == 0)
        {
            for(int i=n-1;i>=0;i--) cout<<a[i];
            cout<<endl;
        }
        if(s%3 == 1)
        {
            while(q.size())
            {
                if(q.top()%3 == 1)
                {

                }
            }
        }

    }
    
}