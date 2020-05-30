#include<bits/stdc++.h>
using namespace std;

int n;
char x[11];

void process(int i)
{
    if(i == n+1)
    {
       for(int j=1;j<=n;j++)
       {
           cout<<x[j];
       }
       cout<<" ";
    }
    else {
        x[i] = 'A'; process(i+1); 
        x[i] = 'B'; process(i+1); 
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        process(1);
        cout<<endl;
    }
}