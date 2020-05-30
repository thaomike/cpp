#include <bits/stdc++.h>
using namespace std;
string s;
int f[1003][1003];

//chua xanh, can sua
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        int n = s.size();
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= n; j++)
                f[i][j] = 0;
        }

        for (int i = 0; i <= n; i++)
            f[i][i] = 1;

        for (int k = 1; k < n; k++)
        {
            for (int i = 0; i < n - k; i++)
            {
                int j = k + i;
                if (s[i] == s[j])
                {
                    if(k>1)
                        f[i][j] = f[i+1][j-1];
                    else
                    {
                        f[i][j]=1;
                    }
                    
                }
                else
                {
                    f[i][j] = 0;
                }
                
            }
        }

        int res = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (f[i][j] == 1)
                {
                    res = max(res, j - i + 1);
                }
            }
        }
        cout << res << endl;
    }
}