#include<bits/stdc++.h>
using namespace std;
string s;

int main() 
{
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(i%2 == 0) cout<<s[i];
    }
}