#include<bits/stdc++.h>
using namespace std;
int n;
int a[11];
int size;

void process()
{
    for(int i=size;i>=0;i--)
    {
        if(a[i] > 1)
        {
            a[i]--;
            int tmp = a[i];
            int res = 0;
            for(int j=0;j<=i;j++) res += a[j]; 
            size = i;
            while(res < n)
            {
                res += tmp;
                if(res>n)
                {
                    res -= tmp;
                    tmp--;
                }
                else {
                    i++;
                    a[i] = tmp;
                    size++;
                }
            }
            cout<<"(";
            for(int j=0;j<i;j++) cout<<a[j]<<" ";
            cout<<a[i]<<") ";
            process();
            break;
        }
    }
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a[0] = n;
        cout<<"("<<a[0]<<") ";
        size = 0;
        process();
        cout<<endl;
    }
}