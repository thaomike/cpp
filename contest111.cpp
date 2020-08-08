#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
    char data;
    struct node *left = NULL;
    struct node *right = NULL;
} *tree;

string s;
stack<tree> st;

string duyet(struct node * r)
{
    string left="";
    if(r->left) left = duyet(r->left);
    string right="";
    if(r->right ) right = duyet(r->right);
    string res = left + r->data + right;
    return res;
}

tree getNode()
{
    tree p;
    p = new node;
    return p;
}

void freeNode(tree  p){
	delete (p); //giải phóng node p
}

int isEmpty(tree  *T){
	if(*T==NULL) //nếu T rỗng
		return 1; //trả lại giá trị đúng
	return 0; //trả lại giá trị sai
}

tree  makeNode(char  x){ //x là giá trị node cần bổ sung vào cây
	tree  p; //Khai báo một node kiểu Tree
	p = getNode();//cấp phát miền nhớ cho p
	p->data = x;         //thiết lập thành phần thông tin cho node
	p->left=NULL;      //tạo liên kết trái cho node
	p->right=NULL;   //Tạo liên kết phải cho node
	return (p); //trả lại node được tạo ra
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            tree tmp;
            tmp = makeNode(s[i]);
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                st.push(tmp);
            }
            else
            {
                if (st.size())
                {
                    tmp->right = st.top();
                    st.pop();
                }
                if (st.size())
                {
                    tmp->left = st.top();
                    st.pop();
                }
                st.push(tmp);
            }
        }
        tree root = st.top();
        string res = duyet(root);
        for(int i=0;i<res.size();i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
}

//b8
/*
dung stack queue

b10 dung map doc dlieu (b14,b15)
*/