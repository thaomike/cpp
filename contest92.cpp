#include <bits/stdc++.h>
using namespace std;

//int so(string s)
//{
//	int tmp = 0;
//	for(int i=0;i<s.size();i++)
//	{
//		int num = s[i] - '0';
//		tmp = tmp*10 + num;
//	}	
//	return tmp;
//}

int main()
{
    int n;
    cin >> n;
	string ignore;
	getline(cin, ignore);
//    vector<pair<int, int> > ds;
	vector<int> ds[n+1];
    for (int i = 1; i <= n; i++)
    {
        string s;
        getline(cin, s);
        s += " ";
        string tmp = "";
        int so = 0;
        for (int j = 0; j < s.size(); j++)
        {
        	if(s[j] >= '0' && s[j] <= '9')
        	{
				so = so*10 + s[j]-'0';
			}
            else
			{
				if(so > i) ds[i].push_back(so);
        		so = 0;
			}
        }
		sort(ds[i].begin(),ds[i].end());
    }
    
    for (int i = 1; i <= n; i++)
    {
    	for(int j=0;j<ds[i].size();j++)
    	{
    		cout << i << " " << ds[i][j] << endl;
		}
        
    }
}
