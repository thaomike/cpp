#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        queue<int> q;
        while (n--)
        {
            int task;
            cin>>task;
            if(task == 1)
            {
                cout<<q.size()<<endl;
            }
            else if(task == 2)
            {
                if(q.empty()) cout<<"YES\n";
                else
                {
                    cout<<"NO\n";
                }
            }
            else if (task == 3)
            {
                int tmp;
                cin>>tmp;
                q.push(tmp);
            }
            else if(task == 4)
            {
                if(q.size()) q.pop();
            }
            else if (task == 5)
            {
                if(q.size())
                {
                    cout<<q.front()<<endl;
                }
                else cout<<-1<<endl;
            }
            else
            {
                if(q.size())
                {
                    cout<<q.back()<<endl;
                }
                else cout<<-1<<endl;
            }

        }
        
    }
}