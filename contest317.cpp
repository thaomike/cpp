#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int a[1000];

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>s;
        priority_queue<int> pq;
        memset(a,0,1000);
        for(int i=0;i<s.size();i++)
        {
            a[s[i]]++;
        }
        for(int i=0;i<1000;i++)
        {
            if(a[i] > 0) pq.push(a[i]);
        } 
        while (n>0)
        {
            int tmp = pq.top() - 1;
            if(tmp == -1) break;
            pq.pop();
            pq.push(tmp);
            n--;
        }

        long long res = 0;
        while (pq.size())
        {
            long long tmp = pq.top();
            pq.pop();
            res += tmp*tmp;
        }
        cout<<res<<endl;
    }
    
}