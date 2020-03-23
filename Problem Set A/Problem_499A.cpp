////Watching a Movie

#include <bits/stdc++.h>
using namespace std;

int main() {
	int min = 1;
	int c = min;
	int n,x;
	cin>>n>>x;
	
	int a[n][2];
	for(int i =0;i<n;i++)
	{
		cin>>a[i][0];
		cin>>a[i][1];
	}
	int i = 0;
	while(i<n)
	{
		while(c+x <= a[i][0])
		{
			c = c+x;
		}
		min = min + a[i][1] - c;
		c = a[i][1] + 1;
		if(c>a[n-1][1])
		{
			break;
		}
		else{
			min++;
		}
		i++;
	}
	cout<<min;
	
	return 0;
}
