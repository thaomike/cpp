#include<bits/stdc++.h>
using namespace std;

int matrix[1001][1001]={};

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    for(int i=1;i<=n;i++)
    {
//    	cin.ignore();
        string s;
        getline(cin,s);
        s += " ";
        string tmp="";
        for(int j=0;j<s.size();j++)
        {
            if(s[j] == ' ')
            {
                int t;
                stringstream ss;
                ss<<tmp;
                ss>>t;
                matrix[i][t] = 1;
                tmp = "";
            }
            else
            {
                tmp+=s[j];
            }
            
        }

    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
