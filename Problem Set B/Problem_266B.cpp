#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int t;
	cin>>n>>t;
	string s;
	cin>>s;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='B')
		{
			v.push_back(i);
		}
	}
	int x = 0;
	while(x<t)
	{
		for(int i=0;i<v.size();i++)
		{
			if(v[i]+1<n && s[v[i]]=='B' && s[v[i] + 1]=='G')
			{
				char t = s[v[i]];
				s[v[i]] = s[v[i] + 1];
				s[v[i] + 1] = t;
				v[i]++;
			}
		}
		x++;
	}
	
	cout<<s;
	return 0;
}
