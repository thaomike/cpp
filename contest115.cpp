#include<bits/stdc++.h>
using namespace std;
int n;

typedef struct node{
    int val;
    struct node *left =NULL, *right=NULL;
    node(){};
    node(int val)
    {
        this->val = val;
    };
} *tree;

tree root = NULL;

tree makeNode(int x)
{
    tree p;
    p = new node;
    p->val = x;
    return p;
}

void bfs(tree root)
{
    queue<tree> q;
    if(root)
    {
        q.push(root);
        while (q.size())
        {
            tree u = q.front();
            q.pop();
            cout<<u->val<<" ";
            if(u->left) q.push(u->left);
            if(u->right) q.push(u->right);
        }
        
    }
}

void process(int father, int child, char relation, tree t)
{
    if(!t) return;
    if(t->val == father)
    {
        if (relation == 'L')
        {
            t->left = makeNode(child);
        }
        if(relation == 'R')
        {
            t->right = makeNode(child);
        }
    }
    else
    {
        process(father, child, relation, t->left);
        process(father, child, relation, t->right);
    }
    
    
}

void init()
{
    for(int i=0;i<n;i++)
    {
        int father,child;
        char relation;
        cin>>father>>child>>relation;
        if(!root) root = new node(father);
        process(father, child, relation, root);
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        root = NULL;
        cin>>n;
        init();
        bfs(root);
        cout<<endl;
    }
}