#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> v;
	for(int i =0; i<n;i++){
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
	int x = v[0];
	for(int i=0;i<n;i++)
	{
		x = __gcd(x,v[i]);
	}
	cout<<(n*x);
	return 0;
}
