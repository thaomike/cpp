#include <bits/stdc++.h>
using namespace std;
int n, k;
int f[101][50004];

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i <= 9; i++)
        f[1][i] = 1;

    for (int j = 0; j <= 50000; j++)
    {
        for (int z = 1; z <= min(j, 9); z++)
        {
            f[2][j] += f[1][j - z];
        }
    }
    // f[2][0] = 1;
    for (int i = 3; i < 101; i++)
    {
        for (int j = 0; j <= 50000; j++)
        {
            for (int z = 1; z <= min(j, 9); z++)
            {
                // if(j<=9)
                f[i][j] += f[i - 1][j - z] + 1;
                if ((f[i - 1][j - z] == 0 && j != z) || j - z >= 9 * (i - 1) + 1)
                    f[i][j]--;
                // else
                // {
                //     f[i][j] += f[i-1][j-z-1];
                // }
            }
        }
        f[i][i * 9] = 1;
    }

    while (t--)
    {
        cin >> n >> k;
        if (k == 0)
        {
            cout << 0 << endl;
            continue;
        }
        cout << f[n][k] << endl;
    }
}