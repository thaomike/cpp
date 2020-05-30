#include<bits/stdc++.h>
using namespace std;

string s;
int a[11];
bool stop;

void print()
{
    for(int i=0;i<s.size();i++)
    {
        cout<<s[a[i]];
    }
    cout<<" ";
}

void process()
{
    stop = true;
    for(int i=s.size()-1;i>0;i--)
    {
        if(a[i] > a[i-1])
        {
            for(int j=s.size()-1;j>=i;j--)
            {
                if(a[j] > a[i-1])
                {
                    swap(a[j],a[i-1]);
                    sort(a+i,a+s.size());
                    break;
                }
            }
            stop = false;
            break;
        }
    }
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        // cout<<s<<" ";
        stop = false;
        for(int i=0;i<s.size();i++) a[i] =  i;
        while (!stop)
        {
            print();
            process();
        }
        cout<<endl;
    }
}