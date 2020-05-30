#include<bits/stdc++.h>
using namespace std;
int n;
int nnt[1000006];
vector<int> store;

void sangNT()
{
    nnt[0]=nnt[1]=1;
    for(int i=2;i<1001;i++)
    {
        if(nnt[i] == 0)
        {
            store.push_back(i);
            for(int j=i*i;j<1000001;j+=i) nnt[j] = 1;
        }
    }
    for(int i=1001;i<=1000000;i++)
    {
        if(nnt[i] == 0) store.push_back(i);
    }
}
int main()
{
    int t;
    cin>>t;
    sangNT();
    while(t--)
    {
        cin>>n;
        int size = upper_bound(store.begin(),store.end(),n) - store.begin();
        bool flag = true;
        for(int i=0;i<size;i++)
        {
            int tmp = store[i];
            int x = lower_bound(store.begin()+i,store.begin()+size,n-tmp) - store.begin();
            if(tmp + store[x] == n)
            {
                cout<<tmp<<" "<<store[x]<<endl;
                flag = false;
                break;
            }

        }
        if(flag) cout<<-1<<endl;
    }
}