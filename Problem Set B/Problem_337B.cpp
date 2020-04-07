#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a*d < b*c)
	{
		int x = __gcd((b*c - a*d) , b*c);
		cout<<(b*c - a*d)/x<<"/"<<(b*c)/x;	}
	else{
		int x = __gcd((a*d - b*c) , (a*d));
		cout<<(a*d - b*c)/x<<"/"<<(a*d)/x;
	}
	return 0;
}
