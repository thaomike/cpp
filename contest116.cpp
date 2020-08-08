#include<bits/stdc++.h>
using namespace std;
int level[1003], in[1003];

int search(int in[], int val, int s)
{
    for(int i=0;i<s;i++)
    {
        if(in[i] == val) return i;
    }
    return -1;
}

void duyet(int in[], int level[], int n)
{
    int root = search(in, level[0], n);
    if(root != 0)
    {
        int newLevel[root];
        int i=0,j=0;
        int z=0;
        for (j = 0; j < n; j++)
        {
            for (i = 0; i < root; i++)
            {
                if (level[j] == in[i])
                {
                    newLevel[z] = in[i];
                    z++;
                    break;
                }
            }
        }
        duyet(in, newLevel, root);
    }
    if(root != n-1)
    {
        int newLevel[n-root-1];
        int i,j,z=0;
        for (j = 0; j < n; j++)
        {
            for (i = root + 1; i < n; i++)
            {
                if (level[j] == in[i])
                {
                    newLevel[z] = level[j];
                    z++;
                    break;
                }
            }
        }
        duyet(in+root+1, newLevel, n-root-1);
    }
    cout<<level[0]<<" ";
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>in[i];
        for(int i=0;i<n;i++) cin>>level[i];
        duyet(in, level, n);
        cout<<endl;
    }
    
}