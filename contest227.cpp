#include<bits/stdc++.h>
using namespace std;
int n,k,s;
int a[22];
bool check[22];
int res,out;

void init()
{
    cin>>n>>k;
    s = 0;
    out = 0;
    res = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s += a[i];
        check[i] = false;
    }
}

void Try(int i, int sum)
{
    if(out == 1) return;
    if(i == n) {
        if(res == k){
            out = 1;
        }
    }
    else
    {
       for(int j=0;j<n;j++)
       {
           if(check[j] == false)
           {
                check[j] = true;
                sum += a[j];
                if(sum < s)
                {
                    Try(i+1,sum);
                }
                if(sum == s)
                {
                    res++;
                    Try(i+1,0);
                    res--;
                }
                sum -= a[j];
                check[j] = false;
           }
           
       } 
    }
    
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        init();
        if(s%k != 0)
        {
            cout<<0<<endl;
        }
        else
        {
            s /= k;
            Try(0,0);
            cout<<out<<endl;
        }        
    }
}