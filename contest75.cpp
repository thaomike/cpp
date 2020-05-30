#include<bits/stdc++.h>
using namespace std;

//sai
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        stack<int> st;
        int length = 0;
        int res = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '(') st.push(i);
            else if(s[i] == ')')
            {
                if(st.size())
                {
                    length += 2;
                    st.pop();
                }
                else
                {
                    res = max(res, length);
                    length = 0;
                }
            }
        }
        res = max(res,length);
        cout<<res<<endl;
    }
}