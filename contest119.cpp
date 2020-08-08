#include<bits/stdc++.h>
using namespace std;

typedef struct node{
    int val;
    struct node *left = NULL, *right = NULL;
    node();
    node(int val){
        this->val = val;
        left = right = NULL;
    }
} *tree;

int L = -1;
bool flag;

void level(tree root, int l)
{
    if(!root->left && !root->right)
    {
        if(L == -1) L = l;
        else
        {
            if(l != L)
            {
                flag = true;
            }
        }
    }
    else
    {
        if(root->left) level(root->left, l+1);
        if(root->right) level(root->right, l+1);
    }
    
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        map<int, tree> m;
        int n;
        cin>>n;
        tree root = NULL;
        L = -1;
        flag = false;
        while(n--)
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
            if(lr == 'L')
            {
                father->left = child;
            }
            else
            {
                father->right = child;
            }
        }
        level(root,0);
        if(flag) cout<<"0\n";
        else
        {
            cout<<"1\n";
        }
        
    }
    
}