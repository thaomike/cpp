#include<bits/stdc++.h>
using namespace std;
string s;
int a[26];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        for(int i=0;i<26;i++)
        {
            a[i] = 0;
        }
        for(int i=0;i<s.size();i++)
        {
            a[s[i] - 'a']++;
        }
        sort(a,a+26,greater<int>());
        if(a[0] <= (s.size()+1)/2)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}