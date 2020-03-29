#include <bits/stdc++.h>
using namespace std;

int main() {
	int r,x,y,x1,y1;
	cin>>r>>x>>y>>x1>>y1;
	r = 2*r;
	double k = sqrt(pow((x1-x),2) + pow((y1-y),2));
	cout<<ceil(k / double(r));
	return 0;
}
