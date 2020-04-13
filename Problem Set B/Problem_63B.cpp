#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	int c = 0;
	vector<int> b(k+1);
	for(int i = 0;i<n;i++)
	{
		int x;
		cin>>x;
		b[x]++;
	}
	while(b[k]!=n)
	{
		int i = k;
		c++;
		while(i>=2)
		{
			if(b[i-1]>0)
			{
				b[i-1]--;
				b[i]++;
			}
			i--;
		}
	}
	cout<<c;
	return 0;
}
