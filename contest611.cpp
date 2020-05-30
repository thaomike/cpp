#include <bits/stdc++.h>
using namespace std;

// struct data
// {
//     int val, valAbs;
//     int index;
// };

// data a[1003];

// bool cmp(data a, data b)
// {
//     return(a.valAbs < b.valAbs || (a.valAbs == b.valAbs && a.index < b.index));
// }

int a[1003];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {

            cin >> a[i];
        }
        int res = INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int tmp = a[i] + a[j];
                if(abs(tmp) < abs(res))
                {
                    res = tmp;
                }
            }
        }
        cout<<res<<endl;
    }
}