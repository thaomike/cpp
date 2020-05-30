#include<bits/stdc++.h>
using namespace std;

long long f[92];
int n;

void sangFibo()
{
    f[1] = f[2] = 1;
    for(int i=3;i<92;i++)
    {
        f[i] = f[i-1]+f[i-2];
    }
}

int main() {
    int t;
    cin>>t;
    sangFibo();
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        long long d[11][11];
        int ma = 1;
        int cot1 = 1, cot2 = n;
        int hang1 = 1, hang2 = n;
        while(ma<=n*n)
        {
            for(int j=cot1;j<=cot2;j++)
            {
                d[hang1][j] = f[ma];
                ma++;
            }
            hang1++;

            for(int j=hang1;j<=hang2;j++)
            {
                d[j][cot2] = f[ma];
                ma++;
            }
            cot2--;

            for(int j=cot2;j>=cot1;j--)
            {
                d[hang2][j] = f[ma];
                ma++;
            }
            hang2--;
            
            for(int j=hang2;j>=hang1;j--)
            {
                d[j][cot1] = f[ma];
                ma++;
            }
            cot1++;
        }
        
        cout<<"Test "<<i<<":\n";
        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=n;k++)
            {
                cout<<d[j][k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}