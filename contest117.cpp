#include<bits/stdc++.h>
using namespace std;

typedef struct node {
    int val;
    int level;
    struct node *left=NULL, *right = NULL;
    node();
    node(int val,int level)
    {
        this->level = level;
        this->val = val;
    }
} *tree;

void bfs(tree root)
{
    stack<tree> s1,s2;
    s1.push(root);
    while (s1.size() || s2.size())
    {
        while(s1.size())
        {
            tree u = s1.top();
            cout<<u->val<<" ";
            s1.pop();
            if(u->right) s2.push(u->right);
            if(u->left) s2.push(u->left);
        }
        while(s2.size())
        {
            tree u = s2.top();
            cout<<u->val<<" ";
            s2.pop();
            if(u->left) s1.push(u->left);
            if(u->right) s1.push(u->right);
        }
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<int, tree> m;
        int n;
        cin>>n;
        tree root = NULL;
        int n1,n2;
        char lr;
        for(int i=0;i<n;i++)
        {
            tree father;
            cin>>n1>>n2>>lr;
            if(m.find(n1) == m.end())
            {
                father = new node(n1,0);
                m[n1] = father;
                if(!root) root = father;
            } else
            {
                father = m[n1];
            }
            father = m[n1];
            tree child = new node(n2,father->level+1);
            if (lr == 'L')
                father->left = child;
            else
            {
                father->right = child;
            }
            m[n2] = child;
        }
        bfs(root);
        cout<<endl;
    }
}