#include<bits/stdc++.h>
using namespace std;

int processMin(int a)
{
    stack<int> st;
    while (a>0)
    {
        int tmp = a%10;
        if(tmp == 6) tmp = 5;
        st.push(tmp);
        a /= 10;
    }
    while (st.size())
    {
        a = a*10+st.top();
        st.pop();
    }
    return a;
}

int processMax(int a)
{
    stack<int> st;
    while (a>0)
    {
        int tmp = a%10;
        if(tmp == 5) tmp = 6;
        st.push(tmp);
        a /= 10;
    }
    while (st.size())
    {
        a = a*10+st.top();
        st.pop();
    }
    return a;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int aa,bb;
    aa = processMin(a);
    bb = processMin(b);
    cout<<aa+bb<<" ";
    aa = processMax(a);
    bb = processMax(b);
    cout<<aa+bb;
    

}