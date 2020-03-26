#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> a;
	int m = 0;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		a.push_back(temp);
	}
	sort(a.begin(),a.end());
	for(int i=0;i<n-1;i++)
	{
		if(a[i]+1 != a[i+1])
		{
			m = a[i]+1;
			break;
		}
	}
	if(m==0)
	{
		m = a[n-1]+1;
	}
	if(a[0]>1)
	{
		m=1;
	}
	cout<<m;
	
	return 0;
}
