#include<bits/stdc++.h>
using namespace std;
string s;
string tmp="";

string process(string tmp1)
{
    if(tmp1[0] >= 97 && tmp1[0] < 123)
    {
        tmp1[0] = tmp1[0] - 32;
    }
    for(int i=1;i<tmp1.size();i++)
    {
        if(tmp1[i] >=65 && tmp1[i] < 91)
        {
            tmp1[i] += 32;
        }
    }
    return tmp1;
}

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,s);
        string dau="";
        int x=0;
        vector<string> res;
        res.clear();
        while(dau == "" || s[x] != ' ')
        {
            if(s[x] != ' ') dau += s[x];
            x++;
        }
        for(int i=x;i<s.size();i++)
        {
            if(s[i] != ' ')
            {
                tmp += s[i];
            }
            else
            {
                if(tmp != "")
                {
                    res.push_back(tmp);
                    tmp = "";
                }

            }
        }
        if(tmp != "")
        {
            res.push_back(tmp);
            tmp="";
        }
        for(int i=0;i<dau.size();i++)
        {
            if(dau[i] >=92 && dau[i] <= 122)
            {
                dau[i] -= 32;
            }
        }
        for(int i=0; i<res.size()-1;i++)
        {
            cout<<process(res[i])<<" ";
        }
        cout<<process(res[res.size()-1])<<", "<<dau<<endl;

    }
}