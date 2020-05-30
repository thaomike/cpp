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
        int d = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
                st.push(s[i]);
            else
            {
                if(st.size()) st.pop();
                else{
                    d++;
                    st.push('(');
                }
            }
        }
        cout<<d+st.size()/2<<endl;
    }
}