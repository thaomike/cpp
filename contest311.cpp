#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

long long n,a[1000006];
long long res;

int main()
{
    int t = 1;
    while(t--)
    {
        priority_queue<long long, vector<long long>, greater<long long> > pq;
        cin>>n;
        res = 0;
        for(int i=0;i<n;i++) 
        {
            long long tmp;
            cin>>tmp;
            pq.push(tmp);
        }
        while(pq.size()>1)
        {
            long long fir = pq.top();
            pq.pop();
            long long sec = pq.top();
            pq.pop();
            long long tmp = (fir + sec) % mod;
            res = (res + tmp)%mod;
            pq.push(tmp);
        }
        cout<<res<<endl;
    }
}