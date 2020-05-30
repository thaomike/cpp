#include <bits/stdc++.h>
using namespace std;
// long long arr[(int)1e7];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[11] = {};
        int check = 0;
        for (int i = 0; i < n; i++)
        {
            long long tmp;
            cin >> tmp;
            if (check < 10)
            {
                if (tmp == 0)
                {
                    if (a[0] == 0)
                        check++;
                    a[0]++;
                }
                while (tmp > 0)
                {
                    int z = tmp % 10;
                    if (a[z] == 0)
                        check++;
                    a[z]++;
                    tmp /= 10;
                }
            }
        }
        for (int i = 0; i < 10; i++)
        {
            if (a[i])
                cout << i << " ";
        }
        cout << endl;
    }
}