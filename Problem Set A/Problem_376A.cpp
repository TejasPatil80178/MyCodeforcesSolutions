#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	long long l;
	for(long long i=0;i<s.length();i++)
	{
		if(s[i]=='^')
		{
			l = i;
			break;
		}
	}
	long long sum1 = 0;
	long long sum2 = 0;
	for(int  i=0;i<s.length();i++)
	{
		if(s[i]!='=' && s[i]!='^')
		{
			if((l-i) > 0)
			{
				sum1 = sum1 + ((int)(s[i] - '0') * (l-i));
			}
			else if((i-l)>0)
			{
				sum2 = sum2 + ((int)(s[i]-'0')*(i-l));
			}
		}
	}
	if(sum1>sum2)
	{
		cout<<"left";
	}
	else if(sum2>sum1){
		cout<<"right";
	}
	else{
		cout<<"balance";
	}
	return 0;
}
