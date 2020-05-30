#include <bits/stdc++.h>
using namespace std;
int n;
int a[1000006];

//chua xong
stack<int> l, r;
void quickSort()
{
    l.push(0);
    r.push(n - 1);
    while (l.size())
    {
        int i = l.top();
        l.pop();
        int j = r.top();
        r.pop();
        int ll = i, rr = j;
        int mid = a[(i + j) / 2];
        while (i <= j)
        {
           
            while (a[i] < mid)
            {
                i++;
            }
            while (a[j] > mid)
            {
                j--;
            }
            if (i <= j)
            {
                if (i < j)
                    swap(a[i], a[j]);
                i++;
                j--;
            }
        }
        if (j > ll)
        {
            l.push(ll);
            r.push(j);
        }
        if (i < rr)
        {
            l.push(i);
            r.push(rr);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        quickSort();
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}