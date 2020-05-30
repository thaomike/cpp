#include<bits/stdc++.h>
using namespace std;

int NNT[1000006];
int n;

void sangNT()
{
	NNT[1] = NNT[0] = 1;
	for(int i=2;i<=1000;i++)
	{
			if(NNT[i] == 0)
			{
				for(int j=i*i;j<=1000000;j+=i)
				{
					NNT[j] = 1;
				}
			}
			
	}
}

int main()
{
	sangNT();
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(NNT[i] == 0) cout<<i<<" ";
	}
}
