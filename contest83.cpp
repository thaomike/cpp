#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    deque<int> q;
    while (t--)
    {
        string s;
        
        cin>>s;
        if(s == "PUSHFRONT")
        {
            int tmp;
            cin>>tmp;
            q.push_front(tmp);
        }
        if(s == "PUSHBACK")
        {
            int tmp;
            cin>>tmp;
            q.push_back(tmp);
        }
        else if(s == "PRINTFRONT")
        {
            if(q.size()) cout<<q.front()<<endl;
            else cout<<"NONE\n";
        }
        else if(s == "PRINTBACK")
        {
            if(q.size()) cout<<q.back()<<endl;
            else cout<<"NONE\n";
        }
        else if(s== "POPFRONT")
        {
            if(q.size()) q.pop_front();
        }
        else if(s== "POPBACK")
        {
            if(q.size()) q.pop_back();
        }
    }
}