#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a;
	cin>>a;
	int x = 0;
	size_t f;
	do{
		x++;
		long long b = a+x;
		string s = to_string(b);
		f = s.find("8");
	}
	while(f==string::npos);
	cout<<x;
	return 0;
}
