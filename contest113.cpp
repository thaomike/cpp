#include<bits/stdc++.h>
using namespace std;
int n,k;
string s;
vector<string> res;
void process(int i, int p, bool flag)
{
    if(i == n-k+1 && flag)
    {
        string tmp = "";
        for(int i=0;i<n-k+1;i++)
        {
            if(s[i] == 'C')
            {
                for(int j=0;j<k;j++) tmp += "A";
//tmp += s[i];
            }
            else
            {
                tmp += s[i];
            }
        }
//        cout<<tmp;
        res.push_back(tmp);
//        cout<<"we";
    }
    else
    {
        s[i] = 'B'; if(i<n-k+1) process(i+1,0,flag);
        if((i == 0 || s[i-1] != 'C' ) && p < k-1){
            s[i] = 'A';
			if(i<n-k+1) process(i+1, p+1, flag);
        }
        if(!flag && (i == 0 || s[i-1] != 'A'))// && (i == n-k || s[i+1] != 'A'))
        {
            s[i] = 'C';
            if(i<n-k+1) process(i+1,0,true);
        }
    }
    
}

int main() {
    cin>>n>>k;
    s.resize(n);
//    cout<<s.size();
    process(0,0,false);
    sort(res.begin(),res.end());
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();i++) cout<<res[i]<<endl;
}
