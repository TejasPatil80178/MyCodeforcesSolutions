#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	double x = (1-(double)a/b) * (1-(double)c/d);
	x = ((double)a/b) / (1-x);
	cout<<fixed<<setprecision(12)<<x;

	return 0;
}
