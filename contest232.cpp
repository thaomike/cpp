#include<bits/stdc++.h>
using namespace std;
string s;
int mo, dong;
vector<string> res;
vector<int> vtri;
string tmp;
int d[100],m[100];

void pre()
{
    stack<int> st;
    int x=-1,z=-1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '(') 
        {
            x++;
            st.push(i);
            m[x] = i;
        }

        if(s[i] == ')')
        {
            z++;
            d[z] = i;
           if(st.size()) st.pop();
           else
           {
                dong++;
                vtri.push_back(z);
           }
        }
    }
    mo = st.size();
}

void push()
{
    // if(!tmp.size()) return;
    // if(tmp.size() == 1 && tmp[0] != )
    for(int i=0;i<tmp.size();i++)
    {
        if(tmp[i] == '(' || tmp[i] == ')')
        {
            res.push_back(tmp);
            return;
        }
    }
}

vector<int> xoaDong;

void processDong(int vt, int chot)
{
    for(int i=vt;i>chot;i++)
    {
        xoaDong.push_back(i);
        processDong()
    }
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        mo = dong = 0;
        for(int i=0;i<vtri.size();i++)
        {
            processDong(i);
        }
    }
}