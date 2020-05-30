#include <bits/stdc++.h>
using namespace std;
stack<int> st;

void show()
{
    stack<int> mirror;
    while (st.size())
    {
        mirror.push(st.top());
        st.pop();
    }
    while (mirror.size())
    {
        cout << mirror.top() << " ";
        st.push(mirror.top());
        mirror.pop();
    }
    cout << endl;
}

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        if (s == "PUSH")
        {
            int tmp;
            cin >> tmp;
            st.push(tmp);
        }
        else if (s == "POP")
        {
            if (st.size())
                st.pop();
        }
        else
        {
            if (st.size())
                cout<<st.top()<<endl;
            else
            {
                cout << "NONE\n";
            }
        }
    }
}