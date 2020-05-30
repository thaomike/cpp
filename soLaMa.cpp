#include<bits/stdc++.h>
using namespace std;

string s;

int value(char c)
{
    if(c == 'I') return 1;
    if(c == 'V') return 5;
    if(c == 'X') return 10;
    if(c == 'L') return 50;
    if(c == 'C') return 100;
    if(c == 'D') return 500;
    if(c == 'M') return 1000;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long res = 0;
        cin>>s;
        int x = 0;
        int tmp=0;
        while(x<s.size())
        {
            if(value(s[x]) >= value(s[x+1]))
            {
                res += value(s[x]);
                x++;
            } 
            else if(value(s[x+1]) > value(s[x]))
            {
                res = res + value(s[x+1]) - value(s[x]);
                x += 2;
            }
            else
            {
                res += value(s[x]);
                x++;
            }
            
            
        }
        cout<<res<<endl;
    }
}