#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll b2d(string s)
{
	ll sum = 0;
	for(ll i =0;i<s.length();i++)
	{
		if(s[i]=='1')
		{
			sum = ((sum%1000003) + (ll)fmod(pow(2,s.length()-1-i),(double)1000003))%1000003;
		}
	}
	
	return (sum%1000003);
}

int main() {
	string s1;
	cin>>s1;
	string s = "";
	for(int i=0;i<s1.length();i++)
	{
		if(s1[i]=='>')
		{
			s+="1000";
		}
		else if(s1[i]=='<')
		{
			s+="1001";
		}
		else if(s1[i]=='+')
		{
			s+="1010";
		}
		else if(s1[i]=='-')
		{
			s+="1011";
		}
		else if(s1[i]=='.')
		{
			s+="1100";
		}
		else if(s1[i]==',')
		{
			s+="1101";
		}
		else if(s1[i]=='[')
		{
			s+="1110";
		}
		else if(s1[i]==']')
		{
			s+="1111";
		}
	}
	
	cout<<b2d(s);

	return 0;
}

/*
">"  →  1000,
"<"  →  1001,
"+"  →  1010,
"-"  →  1011,
"."  →  1100,
","  →  1101,
"["  →  1110,
"]"  →  1111. */
