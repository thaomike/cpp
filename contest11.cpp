
#include<bits/stdc++.h>
using namespace std;

string s;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cin>>s;
        bool flag = true;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i] == '0')
            {
                s[i] = '1';
                for(int j=i+1;j<s.size();j++) s[j] = '0';
                flag = false;
                break;
            } 
        }
        if(flag)
        {
            for(int i=0;i<s.size();i++)
            {
                s[i] = '0';
            }
        }
        cout<<s<<endl;
    }
}