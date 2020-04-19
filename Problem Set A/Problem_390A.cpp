#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> x;
	vector<int> y;
	int c1 = 0;
	int c2 = 0;
	while(n>0)
	{
		int a,b;
		cin>>a>>b;
		if(x.empty())
		{
			x.push_back(a);
			y.push_back(b);
			c1++;
			c2++;
		}
		else{
			auto it1 = find(x.begin(),x.end(),a);
			if(it1==x.end())
			{
				c1++;
				x.push_back(a);
			}
			auto it2 = find(y.begin(),y.end(),b);
			if(it2==y.end())
			{
				c2++;
				y.push_back(b);
			}
		}
		n--;
	}
	
	cout<<min(c1,c2);
	return 0;
}
