#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    int n;
    int d[22][22];
    cin>>t;
    for(int i=1;i<=t;i++)    
    {
        cin>>n;
        int ma = n*n;
        int cot1 = 1, cot2 = n;
        int hang1 = 1, hang2 = n;
        while(ma>0)
        {
            for(int j=cot1;j<=cot2;j++)
            {
                d[hang1][j] = ma;
                ma--;
            }
            hang1++;

            for(int j=hang1;j<=hang2;j++)
            {
                d[j][cot2] = ma;
                ma--;
            }
            cot2--;

            for(int j=cot2;j>=cot1;j--)
            {
                d[hang2][j] = ma;
                ma--;
            }
            hang2--;
            
            for(int j=hang2;j>=hang1;j--)
            {
                d[j][cot1] = ma;
                ma--;
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
}