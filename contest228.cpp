#include<bits/stdc++.h>
using namespace std;
int n,x,a[22];
bool check;
vector<int> tmp;
vector<vector<int> > res;

void process(int sum, int i)
{
    if(sum == x)
    {
        check = true;
        res.push_back(tmp);
    }
    else
    {
        for(int j=i;j<n;j++)
        {
            if(sum + a[j] <= x)
            {
                tmp.push_back(a[j]);
                process(sum+a[j],j);
                tmp.pop_back();
            }
            else return;
        }
    }
    
    
    
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        check = false;
        res.clear();
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        process(0,0);
        if(!check) 
        {
            cout<<-1<<endl;
            continue;
        }
        sort(res.begin(),res.end());
        for(int i=0;i<res.size();i++)
        {
            cout<<"[";
            for(int i1=0;i1<res[i].size()-1;i1++)
            {
                cout<<res[i][i1]<<" ";
            }
            cout<<res[i][res[i].size()-1]<<"] ";
        }
        cout<<endl;
    }
}