#include <bits/stdc++.h>
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

} * tree;

bool process(tree root1, tree root2)
{
    if (!root1 && !root2)
        return true;
    if (root1 && root2)
    {
        if (root1->val == root2->val && (process(root1->left, root2->left)) && (process(root1->right, root2->right)))
            return true;
    }
    return false;
}

// void init(tree root, map<int, tree> *m)
// {
//     int n;
//     cin >> n;
//     while (n--)
//     {
//         tree father;
//         int n1, n2;
//         char lr;
//         cin >> n1 >> n2 >> lr;
//         if (m->find(n1) == m->end())
//         {
//             father = new node(n1);
//             *m[n1] = father;
//             if (!root)
//                 root = father;
//         }
//         else
//         {
//             father = m->at(n1);
//         }
//         tree child = new node(n2);
//         if (lr == 'L')
//         {
//             father->left = child;
//         }
//         else
//         {
//             father->right = child;
//         }
//         m->at(n2) = child;
//     }
//     // cout<<m[2]->val;
// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        tree root[2];
        root[0] = root[1] = NULL;
        map<int, tree> m[2];
        for (int i = 0; i < 2; i++)
        {
            int n;
            cin >> n;
            while (n--)
            {
                tree father;
                int n1, n2;
                char lr;
                cin >> n1 >> n2 >> lr;
                if (m[i].find(n1) == m[i].end())
                {
                    father = new node(n1);
                    m[i][n1] = father;
                    if (!root[i])
                        root[i] = father;
                }
                else
                {
                    father = m[i][n1];
                }
                tree child = new node(n2);
                if (lr == 'L')
                {
                    father->left = child;
                }
                else
                {
                    father->right = child;
                }
                m[i][n2] = child;
            }
        }
        // cout<<root[0]->left->val<<" "<<root[1]->left->val;
        if (process(root[0], root[1]))
            cout << "1\n";
        else
        {
            cout << "0\n";
        }
    }
}