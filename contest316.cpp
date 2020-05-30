#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,d;
    int t;
    cin>>t;
    while (t--)
    {
        cin>>s>>d;
        if(d*9 < s)
        {
            cout<<-1<<endl;
            continue;
        }
        string res="";
        while(d>1)
        {
            bool flag = true;
            for(int i=9;i>=0;i--)
            {
                if(s-i > 0)
                {
                    flag = false;
                    char tmp = i+'0';
                    res = tmp + res;
                    s-=i;
                    break;
                }
            }
            if(flag) res = '0' + res;
            d--;
        }
        char tmp = s+'0';
        res =tmp+ res;
        cout<<res<<endl;
    }
    
}