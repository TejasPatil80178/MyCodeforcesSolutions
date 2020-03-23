#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string s;
	string s1;
	cin>>n;
	cin>>s;
	int a1 = 1;
	int a2 = 0;
	for(int i =1;i<n;i++)
	{
		string t;
		cin>>t;
		if(s==t)
		{
			a1++;
		}
		else{
			s1=t;
			a2++;
		}
	}
	if(a1>a2)
	{
		cout<<s;
	}
	else{
		cout<<s1;
	}
	return 0;
}
