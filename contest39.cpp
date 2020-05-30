#include<bits/stdc++.h>
using namespace std;
int n;
int resPro;
vector<vector<int> > deadline;

struct data {
    int Deadline, Porfit;
};

data List[1000];

bool cmp(data a, data b)
{
    return(a.Porfit > b.Porfit || (a.Porfit == b.Porfit && a.Deadline < b.Deadline));
}

void init()
{
    resPro = 0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        data tmp;
        int order;
        cin>>order>>tmp.Deadline>>tmp.Porfit;
        deadline[tmp.Deadline].push_back(tmp.Porfit);
    }
}

int main(int argc, const char** argv) {
    int t;
    cin>>t;
    while(t--)
    {
        int done = 0;
        init();
        sort(List+1,List+1+n,cmp);
        for(int i=1;i<=n;i++)
        {
            // cout<<List[i].Deadline<<" "<<List[i].Porfit<<endl;
            if(done < List[i].Deadline)
            {
                
                resPro += List[i].Porfit;
                done++;
            }
            // else
            // {
            //     cout<<done<<" "<<List[i].Deadline<<"test\n";
            // }
            
        }
        cout<<done<<" "<<resPro<<endl;
    }
    return 0;
}