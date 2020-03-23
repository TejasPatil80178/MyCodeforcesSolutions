#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	int max = INT_MIN;
	int i = 0;
	while(i<n-1)
	{
		int c = 1;
		while(v[i]==v[i+1])
		{
			c++;
			i++;
		}
		if(c>max)
		{
			max = c;
		}
		i++;
	}
	if(n%2==0)
	{
		if(max>(n/2))
		{
			cout<<"NO";
		}
		else{
			cout<<"YES";
		}
	}
	else{
		if(max > ((n/2)+1))
		{
			cout<<"NO";
		}
		else{
			cout<<"YES";
		}
	}
	
	return 0;
}
