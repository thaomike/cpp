#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        bool flag = true;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else
            {
                if (s[i] == ')')
                {
                    if (st.size() && st.top() == '(')
                        st.pop();
                    else
                    {
                        cout << "NO\n";
                        flag = false;
                        break;
                    }
                }
                if (s[i] == '}')
                {
                    if (st.size() && st.top() == '{')
                        st.pop();
                    else
                    {
                        cout << "NO\n";
                        flag = false;
                        break;
                    }
                }
                if (s[i] == ']')
                {
                    if (st.size() && st.top() == '[')
                        st.pop();
                    else
                    {
                        cout << "NO\n";
                        flag = false;
                        break;
                    }
                }
            }
        }
        if (st.empty() && flag)
            cout << "YES\n";
        else if(flag)
        {
            cout << "NO\n";
        }
    }
}