#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
stack<vector<int> > d;
void print(vector<int> a)
{
    cout<<"[";
    for(int i=0;i<a.size()-1;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<a[a.size()-1]<<"] ";
}

void process()
{
    vector<int> b;
    b.resize(a.size()-1);
    for(int i=0;i<a.size()-1;i++)
    {   
        b[i] = a[i] + a[i+1];
    }
    a = b; 
    d.push(a);
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a.resize(n);
        for(int i=0;i<n;i++) cin>>a[i];
        d.push(a);
        while (a.size()>1)
        {
            process();
        }
        while (d.size())
        {
            print(d.top());
            d.pop();
        }
        cout<<endl;
        
    }
}