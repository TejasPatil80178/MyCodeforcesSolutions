#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int sum = n + n-1 + v[0];
	for(int i=0;i<n-1;i++)
	{
		sum = sum + (abs(v[i+1] - v[i]));
	}
	cout<<sum;
	return 0;
}
