#include <bits/stdc++.h>
using namespace std;
int n;
int pre[1003], in[1003];

int search(int pre[], int val, int s)
{
    for (int i = 0; i < s; i++)
    {
        if (pre[i] == val)
            return i;
    }
    return -1;
}

void process(int in[], int pre[], int n)
{
    int root = search(in, pre[0], n);
    if (root != 0) 
    {
        //xac dinh cay con trai
        process(in, pre + 1, root);
    }
    if (root != n - 1)
    {
        process(in + root + 1, pre + root + 1, n - root - 1);
    }
    cout << pre[0] << " ";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> in[i];
        for (int i = 0; i < n; i++)
            cin >> pre[i];
        process(in,pre,n);
        cout<<endl;
    }
}
