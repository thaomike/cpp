#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
            {
                st.push(s[i]);
            }
            else
            {
                while (st.size())
                {
                    cout << st.top();
                    st.pop();
                }
                cout << " ";
            }
        }
        while (st.size())
        {
            cout<<st.top();
            st.pop();
        }
        cout<<endl;
    }
}