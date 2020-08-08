#include<bits/stdc++.h>
using namespace std;

typedef struct node{
    int val;
    struct node *left = NULL, *right = NULL;
    node();
    node(int val)
    {
        this->val = val;
    }
} *tree;

bool flag = false;

int check(tree root)
{
    if (!root) return 0;
    if(!root->left && !root->right) return root->val;
    int l=0, r=0;
    if(root->left) l = check(root->left);
    if(root->right) r = check(root->right);
    if(root->val == l+r) return (l+r)*2;
    if(root->val != l+r)
    {
        flag = true;
        return 0;
    }
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        map<int,tree> m;
        cin>>n;
        tree root = NULL;
        while (n--)
        {
            int n1,n2;
            char lr;
            cin>>n1>>n2>>lr;
            tree father;
            if(m.find(n1) == m.end())
            {
                father = new node(n1);
                m[n1] = father;
                if(!root) root = father;
            }
            else father = m[n1];
            tree child = new node(n2);
            m[n2] = child;
            if(lr == 'L') father->left = child;
            else father->right = child;
        }
        flag = false;
        check(root);
        if(flag) cout<<"0\n";
        else cout<<"1\n";
    }
    
}