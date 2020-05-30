#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    queue<int> q;
    while(n--)
    {
        int t;
        cin>>t;
        if(t == 1)
        {
            cout<<q.size()<<endl;
        }
        if(t == 2)
        {
            if(q.empty()) cout<<"YES\n";
            else
            {
                cout<<"NO\n";
            }
        }
        if(t == 3)
        {
            int tmp;
            cin>>tmp;
            q.push(tmp);
        }
        if(t == 4)
        {
            if(q.size()) q.pop();
        }
        if(t == 5)
        {
            if(q.size()) cout<<q.front()<<endl;
            else
            {
                cout<<-1<<endl;
            }
        }
        if(t == 6)
        {
            if(q.size()) cout<<q.back()<<endl;
            else
            {
                cout<<-1<<endl;
            }
        }
    }
}