#include<bits/stdc++.h>
using namespace std;
int n, a[22];
vector<int> fir,sec;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        fir.clear(); sec.clear();
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(i%2 == 0)
            {
                fir.push_back(a[i]);
            }
            else
            {
                sec.push_back(a[i]);
            }
        }
        long long first = 0, second = 0;
        for(int i=0;i<fir.size();i++)
        {
            first = first*10 + fir[i];
        }
        for(int i=0;i<sec.size();i++)
        {
            second = second*10 + sec[i];
        }
        cout<<first + second<<endl;
    }
}