#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s,t;
	cin>>s>>t;
	int n1 = s.length();
	int n2 = t.length();
	if(n1<n2)
	{
		cout<<"need tree";
		return 0;
	}
	vector<int> a(26,0);
	vector<int> b(26,0);
	for(int i=0;i<n1;i++)
	{
		a[s[i]-'a']++;
	}
	for(int i=0;i<n2;i++)
	{
		b[t[i]-'a']++;
	}
	for(int i=0;i<26;i++)
	{
		if(a[i] < b[i])
		{
			cout<<"need tree";
			return 0;
		}
	}
	if(n1==n2)
	{
		cout<<"array";
		return 0;
	}
	else{
		size_t f = s.find(t[0]);
		for(int i=1;i<n2;i++)
		{
			f = s.find(t[i],f+1);
			if(f==string::npos)
			{
				cout<<"both";
				return 0;
			}
		}
		cout<<"automaton";
	}
	
	return 0;
}
