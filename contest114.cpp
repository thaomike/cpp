#include <bits/stdc++.h>
using namespace std;
int pre[1005];

void postOrder(int d, int c)
{
    int i;
    if (d > c)
        return;
    for (i = d + 1; i <= c; i++)
        if (pre[i] > pre[d])
            break;
    postOrder(d + 1, i - 1);
    postOrder(i, c);
    cout << pre[d] << " ";
}

main()
{
    int t, n, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
            cin >> pre[i];
        postOrder(0, n - 1);
        cout << endl;
    }
}