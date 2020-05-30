#include<bits/stdc++.h>
using namespace std;
long long n,a[1000006];
long long res;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        priority_queue<int, vector<int>, greater<int> > pq;
        cin>>n;
        res = 0;
        for(int i=0;i<n;i++) 
        {
            int tmp;
            cin>>tmp;
            pq.push(tmp);
        }
        while(pq.size()>1)
        {
            long long fir = pq.top();
            pq.pop();
            long long sec = pq.top();
            pq.pop();
            int tmp = fir + sec;
            res = res + tmp;
            pq.push(tmp);
        }
        cout<<res<<endl;
    }
}