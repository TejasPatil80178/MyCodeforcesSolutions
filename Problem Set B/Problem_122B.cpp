#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int n = s.length();
	int c4 = 0;
	int c7 = 0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='4')
		{
			c4++;
		}
		else if(s[i]=='7')
		{
			c7++;
		}
	}
	if(c4==0 && c7==0)
	{
		cout<<-1;
	}
	else if(c7>c4)
	{
		cout<<7;
	}
	else{
		cout<<4;
	}
	
	return 0;
}
