#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int c = 0;
	while(n>0)
	{
		string s;
		cin>>s;
		if(s[0]-'0' >= 0 && s[0]-'0' <=9)
		{
			int x = stoi(s);
			if(x<18)
			{
				c++;
			}
		}
		else{
			if(s=="ABSINTH"||s=="BEER"||s=="BRANDY"||s=="CHAMPAGNE"||s=="GIN"||s=="RUM"||s=="SAKE"||s=="TEQUILA"||s=="VODKA"||s=="WHISKEY"||s=="WINE")
			{
				c++;
			}
		}
		n--;
	}
	
	cout<<c;
	return 0;
}
