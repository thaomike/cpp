#include<bits/stdc++.h>
using namespace std;

typedef struct node{
    string data;
    struct node *left = NULL;
    struct node *right = NULL;
} *tree;

int duyet(struct node * r)
{

    int left;
    if(r->left) left = duyet(r->left);
    int right;
    if(r->right ) right = duyet(r->right);
    if(r->data == "+" || r->data == "-" || r->data == "*" || r->data == "/")
    {
        if(r->data == "+") return left+right;
        else if(r->data == "-") return left - right;
        else if(r->data == "*") return left*right;
        else return left/right;
    }
    else {
        stringstream ss;
        ss<<r->data;
        int res;
        ss>>res;
        return res;
    }
}

tree makeNode(string val)
{
    tree p;
    p = new node;
    p->data = val;
    p->left = p->right = NULL;
    return p;
}

deque<pair<int, tree> > store;
tree root;
void makeTree(string s)
{
    s += " ";
    string tmp = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            tree t = makeNode(tmp);
            if (!store.size())
            {
                root = t;
                store.push_back(make_pair(0, t));
            }
            else
            {
                tree parent = store.front().second;
                int level = store.front().first;
                store.pop_front();
                if (level == 0)
                {
                    parent->left = t;
                    level++;
                    store.push_front(make_pair(level, parent));
                }
                else
                {
                    parent->right = t;
                }
                store.push_back(make_pair(0, t));
            }
            tmp = "";
        }
        else
        {
            tmp += s[i];
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        store.clear();
        int n;
        cin>>n;
        cin.ignore();
        string s;
        getline(cin,s);
        makeTree(s);
        cout<<duyet(root)<<endl;
    }
    
}