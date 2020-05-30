#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int n;
long long a;
vector< long long > d;
long long res[502];

void pre()
{
    for(int i=1;i<=500;i++)
    {
        int tmp = i;
        if(i%9==0) tmp /= 9;
        else if(i%3 == 0) tmp /= 3;
        for(int j=1;j<d.size();j++)
        {
            if(d[j] % tmp == 0)
            {
                res[i] = d[j]*9;
                break;
            }
        }
    }
}

int main() {
    int t;
    cin>>t;
    d.push_back(0);
    d.push_back(1);
    a = 1;

    for(int i=2;i<=18;i++)
    {
        a *= 10;
        int m = d.size();
        for(int j=0;j<m;j++) {
            d.push_back(a+d[j]);
        }
    }

    pre();
    for(int i=0;i<501;i++) cout<<res[i]<<endl;
    while (t--)
    {
        cin>>n;
        cout<<res[n]<<endl;
    }
}