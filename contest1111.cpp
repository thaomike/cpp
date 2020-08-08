#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
    int val;
    struct node *left = NULL, *right = NULL;
    node();
    node(int val)
    {
        this->val = val;
    }

} *tree;

int L = -1;
bool flag = true;

void process(tree root, int level)
{
    if(!root->left && !root->right)
    {
        if(L == -1)
        {
            L = level;
        }
        else
        {
            if(L != level) flag = false;
        }
    }
    else
    {
        if(!(root->left && root->right))
        {
            flag = false;
        }
        else
        {
            process(root->left, level+1);
            process(root->right, level+1);
        }
    }
}


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        tree root = NULL;
        map<int, tree> m;
        L = -1;
        flag = true;
        while (n--)
        {
            tree father;
            int n1,n2;
            char lr;
            cin>>n1>>n2>>lr;
            if(m.find(n1) == m.end())
            {
                father = new node(n1);
                m[n1] = father;
                if(!root) root = father;
            }
            else
            {
                father = m[n1];
            }
            tree child = new node(n2);
            if(lr == 'L')
            {
                father->left = child;
            }
            else
            {
                father->right = child;
            }
            m[n2] = child;
        }
        process(root,0);
        if(flag) cout<<"Yes\n";
        else
        {
            cout<<"No\n";
        }
        
    }
    
}