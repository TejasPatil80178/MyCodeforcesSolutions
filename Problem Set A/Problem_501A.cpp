#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int x1 = max((3*a/10) , a - (a/250) * c);
	int x2 = max((3*b/10) , b - (b/250) * d);
	if(x1>x2)
	{
		cout<<"Misha";
	}
	else if(x2>x1)
	{
		cout<<"Vasya";
	}
	else{
		cout<<"Tie";
	}
	return 0;
}
