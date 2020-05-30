#include <bits/stdc++.h>
using namespace std;

int value(char a)
{
    switch (a)
    {
    case '+':
        return 1;
        break;
    case '-':
        return 1;
        break;
    case '*':
        return 2;
        break;
    case '/':
        return 2;
        break;
    default:
        return 3;
        break;
    }
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stack<char> st;
        string res = "";
    }
}