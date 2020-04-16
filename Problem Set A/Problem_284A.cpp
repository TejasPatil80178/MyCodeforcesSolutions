#include <bits/stdc++.h>
using namespace std;

int main() {
	int ans = 0;
	int p;
	cin>>p;
	int x = 1;
	while(x<p)
	{
		int c = 1;
		int k = x%p;
		while(k!=1 && c<p-1)
		{
			k = k*x;
			k = k%p;
			c++;
		}
		if(c==p-1) ans++;
		x++;
	}
	
	cout<<ans;
	return 0;
}
