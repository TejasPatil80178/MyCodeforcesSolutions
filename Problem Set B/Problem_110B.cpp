#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	string s = "abcd";
	string a = "";
	int k = n/4;
	while(k>0)
	{
		a+=s;
		k--;
	}
	k = n%4;
	a+=s.substr(0,k);
	cout<<a;
	return 0;
}
