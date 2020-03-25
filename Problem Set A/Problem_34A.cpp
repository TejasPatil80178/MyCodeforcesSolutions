#include <bits/stdc++.h>
using namespace std;

int main() {
	int m = INT_MAX;
	int b1,b2;
	int n;
	cin>>n;
	vector<int> a;
	for(int i =0;i<n;i++)
	{
		int temp;
		cin>>temp;
		a.push_back(temp);
	}
	for(int i=0;i<n-1;i++)
	{
		int x = abs(a[i+1] - a[i]);
		if(x<m)
		{
			m = x;
			b1 = i+2;
			b2 = i+1;
		}
	}
	if(abs(a[n-1] - a[0]) < m)
	{
		b1 = 1;
		b2 = n;
	}
	
	cout<<b2<<" "<<b1;
	return 0;
}
