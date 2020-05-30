#include<bits/stdc++.h>
using namespace std;

int n,a[100005];

class data {
    public:
    int x,y;
    int viTri;
};

struct datab
{
    int x,y;
};


bool cmp(data a, data b)
{
    return(a.y > b.y || (a.y == b.y && a.viTri < b.viTri));
}

vector<data> mlist;
datab b[100005];

bool cmpb(datab a, datab b)
{
    return (a.x < b.x || (a.x == b.x && a.y < b.y));
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        mlist.clear();
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i].x = a[i];
            b[i].y = i;
        }

        sort(b,b+n,cmpb);

        for(int i=0;i<n;i++)
        {
            bool flag = true;
            if(mlist.empty() || (b[i].x != mlist[mlist.size()-1].x))
            {
                data tmp;
                tmp.x = b[i].x; tmp.y = 1;
                tmp.viTri = b[i].y;
                mlist.push_back(tmp);
            }
            else
            {
                mlist[mlist.size()-1].y++;
            }
        }
        sort(mlist.begin(),mlist.end(),cmp);
        for(int i=0;i<mlist.size();i++)
        {
            for(int j=0;j<mlist[i].y;j++)
            {
                cout<<mlist[i].x<<" ";
            }
        }
        cout<<endl;
    }
}