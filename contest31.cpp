#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int money[] = {1000,500,200,100,50,20,10,5,2,1};
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int res=0;
        for(int i=0;i<10;i++)
        {
            while(n>=money[i])
            {
                n-=money[i];
                res++;
            }
        }
        cout<<res<<endl;
    }
}