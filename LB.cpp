#include <bits/stdc++.h>
using namespace std;
int n;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    priority_queue<int> du0;
    priority_queue<int, vector<int>, greater<int>> du1, du2;
    cin >> n;
    long long s = 0;
    for (int i = 0; i < n; i++)
    {
      int tmp;
      cin >> tmp;
      du0.push(tmp);
      if (tmp % 3 == 1)
        du1.push(tmp);
      if (tmp % 3 == 2)
      {
        du2.push(tmp);
      }
      s += tmp;
    }
    if (s % 3 == 1 && du1.empty() && du2.size() <= 2 || (s % 3 == 2 && du2.empty() && du1.size() <= 2))
    {
      cout << -1 << endl;
    }
    else
    {
      int x = INT_MAX, y = INT_MIN;
      long long z = LLONG_MIN;
      if (s % 3 == 1)
      {
        if (du1.empty())
        {
          x = du2.top();
          du2.pop();
          y = du2.top();
          du2.pop();
        }
        else
          x = du1.top();
      }
      if (s % 3 == 2)
      {
        if (du2.empty())
        {
          x = du1.top();
          du1.pop();
          y = du1.top();
        }
        else
          x = du2.top();
      }
      while (du0.size())
      {
        int tmp = du0.top();
        if (tmp == x)
          x = INT_MIN;
        else if (tmp == y)
          y = INT_MIN;
        else
        {
          cout << tmp;
        }
        du0.pop();
      }
      cout << endl;
    }
  }
}