#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int k;
	cin>>s>>k;
	int n = s.length();
	vector<int> v;
	for(int i=0;i<26;i++)
	{
		int t;
		cin>>t;
		v.push_back(t);
	}
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		sum = sum+(v[s[i]-'a'] * (i+1));
	}
	int m = *max_element(v.begin(),v.end());
	int i = n+1;
	while(k>0)
	{
		sum = sum + (m*i);
		i++;
		k--;
	}
	cout<<sum;
	return 0;
}
