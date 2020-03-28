#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int m1;
	cin>>n>>m1;
	map<string,string> m;
	for(int i=0;i<m1;i++)
	{
		string s1;
		string s2;
		cin>>s1>>s2;
		int n1 = s1.length();
		int n2 = s2.length();
		if(n1<n2)
		{
			m[s1] = s1;
		}
		else if(n2<n1)
		{
			m[s1] = s2;
		}
		else{
			m[s1] = s1;
		}
	}
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		cout<<m[s]<<" ";
	}
	return 0;
}
