#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int store[30]={};
        int k;
        string s;
        cin>>k>>s;
        for(int i=0;i<s.size();i++)
        {
            store[s[i]-'A']++;
        }
        priority_queue<int> pq;
        for(int i=0;i<26;i++)
        {
            pq.push(store[i]);
        }
        while (k--)
        {
            if(pq.top() > 0)
            {
                int tmp = pq.top();
                pq.pop();
                pq.push(tmp-1);
            }
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