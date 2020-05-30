#include <bits/stdc++.h>
using namespace std;
int n;
long long a[1000006];

void Merge(int l, int mid, int h)
{
    long long b[h - l + 1];
    int i = l;
    int j = mid;
    int cs = 0;
    while (i < mid && j <= h)
    {
        if (a[i] < a[j])
        {
            b[cs] = a[i];
            i++;
        }
        else
        {
            b[cs] = a[j];
            j++;
        }
        cs++;
    }
    while (i < mid)
    {
        b[cs] = a[i];
        i++;
        cs++;
    }
    while (j <= h)
    {
        b[cs] = a[j];
        j++;
        cs++;
    }
    for (int i = l; i <= h; i++)
    {
        a[i] = b[i - l];
    }
}

void MergeSort(int l, int h)
{
    if (h - l == 1)
    {
        if (a[l] > a[h])
            swap(a[l], a[h]);
    }
    else
    {
        int mid = (l + h) / 2;
        MergeSort(l, mid);
        MergeSort(mid, h);
        Merge(l, mid, h);
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    MergeSort(0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}