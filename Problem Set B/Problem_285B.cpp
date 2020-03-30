#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,s,t;
	cin>>n>>s>>t;
	int s1 = s;
	vector<int> v(n+1,0);
	for(int i=1;i<=n;i++)
	{
		cin>>v[i];
	}
	int k = 0;
	while(s!=t)
	{
		s = v[s];
		k++;
		if(s==s1)
		{
			cout<<-1;
			return 0;
		}
	}
	cout<<k;
	return 0;
}
