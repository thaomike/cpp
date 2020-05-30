#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    string sa="", sb="";
    cin>>s;
    int a[26];
    for(int i=0;i<s.size();i++)
    {
        a[s[i] - 'a']++;
    }
    sa += s[s.size()-1];
    a[s[s.size()-1]]--;
    n--;
    while(n--)
    {
        
    }
}