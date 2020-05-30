#include<bits/stdc++.h>
using namespace std;
string s;
long long  n;
long long big;

void buocNhay()
{
    big = s.size();
    while(big < n)
    {
        big *= 2;
    }
}

int main()
{
    cin>>s>>n;
    buocNhay();
    int size = s.size();
    while(n>size)
    {
        big /= 2;
        if(n>big)
        {
            if(n == big + 1)
            {
                n = big;
            }
            else
            {
            n = n-big-1;
            }
        }
        
    }
    cout<<s[n-1];
}