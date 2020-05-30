#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[2],b[2],c[2];
    cin>>a[0]>>a[1]>>b[0]>>b[1]>>c[0]>>c[1];
    sort(a,a+2);
    sort(b,b+2);
    sort(c,c+2);
    if(a[1] == b[1] && a[1] == c[1])
    {
        if(a[0] + b[0] + c[0] == a[1])
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    else
    {
        bool flag = false;
        //chon a
        if(b[0] == c[0])
        {
            if(b[1]+c[1] == a[0]+b[0] && a[0] + b[0] == a[1]) flag = true;
        }
        if(b[1] == c[0])
        {
            if(b[0]+c[1] == a[0]+b[1] && a[0] + b[1] == a[1]) flag = true;
        }
        if(b[1] == c[1])
        {
            if(b[0]+c[0] == a[0]+b[1] && a[0]+b[1] == a[1]) flag = true;

        }
        if(b[0] == c[1])
        {
            if(b[1]+c[0] == a[0]+b[0] && a[0]+b[0] == a[1]) flag = true;
        }

        //chon b
        if(a[0] == c[0])
        {
            if(a[1]+c[1] == b[0]+a[0] && b[0]+a[0] == b[1]) flag = true;
        }
        if(a[1] == c[0])
        {
            if(a[0]+c[1] == b[0]+a[1] && b[0]+a[1] == b[1]) flag = true;
        }
        if(a[1] == c[1])
        {
            if(a[0]+c[0] == b[0]+a[1] && b[0] + a[1] == b[1]) flag = true;
        }
        if(a[0] == c[1])
        {
            if(a[1]+c[0] == b[0]+a[0] && b[0]+a[0] == b[1]) flag = true;
        }

        //chon c
        if(b[0] == a[0])
        {
            if(b[1]+a[1] == c[0]+b[0] && c[0]+b[0] == c[1]) flag = true;
        }
        if(b[1] == a[0])
        {
            if(b[0]+a[1] == c[0]+b[1] && c[0]+b[1] == c[1]) flag = true;
        }
        if(b[1] == a[1])
        {
            if(b[0]+a[0] == c[0]+b[1] && c[0]+b[1] == c[1]) flag = true;
        }
        if(b[0] == a[1])
        {
            if(b[1]+a[0] == c[0]+b[0] && c[0]+b[0] == c[1]) flag = true;
        }

        //ketluan
        if(flag) cout<<"YES";
        else
        {
            cout<<"NO";
        }
        
    }
    

}