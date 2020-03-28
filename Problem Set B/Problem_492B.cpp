#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,l;
	cin>>n>>l;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	double diff = 0.0;
	for(int i=0;i<n-1;i++)
	{
		if((v[i+1]-v[i]) > diff)
		{
		    diff = (double)(v[i+1]-v[i]);
		}
	} 
	bool flag = false;
	if((v[0] - 0) >= (diff/2) && (v[0]-0) >= l-v[n-1])
	{
		flag = true;
		diff = v[0] - 0;
	}
	if(l-v[n-1] >= (diff/2) && (v[0]-0) <= l-v[n-1])
	{
		flag = true;
		diff = l - v[n-1];
	}
	if(flag)
	{
		cout<<fixed<<setprecision(10)<<diff;
	}
	else{
		cout<<fixed<<setprecision(10)<<diff/2;
	}
	
	return 0;
}
