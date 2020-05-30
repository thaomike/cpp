#include<bits/stdc++.h>
using namespace std;
string s;
int test;
bool flag = true;

void process();

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        cin>>test>>s;
        flag = true;
        process();
        if(!flag)
        {
            cout<<test<<" "<<s<<endl;
        }
        else
        {
            cout<<test<<" BIGGEST\n";
        }
        
    }
}

void process() {
    for(int i=s.size()-1;i>0;i--)
    {
        if(s[i] > s[i-1]) 
        {
            for(int j=s.size()-1;j>=i;j--)
            {
                if(s[i-1] < s[j]) 
                {
                    swap(s[i-1],s[j]);
                    sort(s.begin()+i,s.end());
                    break;
                }
                
            }
            flag = false;
            break;
        }
    }
}