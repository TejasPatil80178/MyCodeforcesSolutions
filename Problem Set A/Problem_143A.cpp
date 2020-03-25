#include <bits/stdc++.h>
using namespace std;

int main() {
	int r1,r2;
	int c1,c2;
	int d1,d2;
	cin>>r1>>r2>>c1>>c2>>d1>>d2;
	int b = (r1-d1+c2) / 2;
	int a = r1-b;
	int d = c2-b;
	int c = d2-b;
	bool b1 = (a<=9)&&(b<=9)&&(c<=9)&&(d<=9)&&(a>0)&&(b>0)&&(c>0)&&(d>0);
	bool b2 = (a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d);
	if(b1&&b2 && (c+d==r2) && (a+c==c1))
	{
		cout<<a<<" "<<b<<endl;
		cout<<c<<" "<<d;
	}
	else{
		cout<<-1;
	}
	return 0;
}
