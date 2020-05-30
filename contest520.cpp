#include <bits/stdc++.h>
using namespace std;
long long n;

//xanh
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long res = 0;
        int a[20];
        int z=0;
        cin>>n;
        while (n>0)
        {
            int tmp = n%10;
            a[z] = tmp;
            z++;
            n/=10;
        }
        for(int i=0;i<z;i++) {
            long long tmp = 0;
            for(int j=0;j<=i;j++)
            {
                tmp = tmp*10 + a[i];
            }
            res += tmp*(z-i);
        }
        cout<<res<<endl;
    }
}
/*
 
*/
/*

vector<long long> res;
        res.clear();
        long long a[20];
        int z=0;
        cin>>n;
        while (n>0)
        {
            int tmp = n%10;
            a[z] = tmp;
            z++;
            n/=10;
        }
        int cs = 1;
        for(int i=z-1;i>=0;i--)
        {
            res.push_back(a[i]);
            long long tmp = a[i];
            cs = 10;
            for(int j=i+1;j<z;j++)
            {
                tmp = tmp+a[j]*cs;
                cs *= 10;
                res.push_back(tmp);
            }
        }
        sort(res.begin(),res.end());
        if(res.size() == 0)
        {
            cout<<"0\n";  
            continue;
        } 
        long long r = res[0];
        for(int i=1;i<res.size();i++)
        {
            if(res[i] != res[i-1])
            {
                r += res[i];
            }
        }
        cout<<r<<endl;
*/