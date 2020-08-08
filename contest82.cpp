#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    queue<int> q;
    while (t--)
    {
        string s;
        
        cin>>s;
        if(s == "PUSH")
        {
            int tmp;
            cin>>tmp;
            q.push(tmp);
        }
        else if(s == "PRINTFRONT")
        {
            if(q.size()) cout<<q.front()<<endl;
            else cout<<"NONE\n";
        }
        else if(s== "POP")
        {
            if(q.size()) q.pop();
        }
    }
}