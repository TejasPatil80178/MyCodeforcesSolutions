#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
//	vector<int> v;
	int i = 1;
	int k = (m+1)/2;
	while(n>0)
	{
		if(m%2!=0)
		{
			if(i==1 || i==k)
			{
				cout<<k<<endl;
				i = 1;
				n--;
				if(n<=0) break;
			}
			if(k-i>=1)
			{
				cout<<(k-i)<<endl;
				n--;
				if(n<=0) break;
			}
			if(k+i<=m)
			{
				cout<<(k+i)<<endl;
				n--; 
				if(n<=0) break;
			}
			if(i<k)
			{
				i++;
			}
		}
		else{
			if(i==1 || i>k)
			{
				cout<<k<<endl;
				i = 1;
				n--;
				if(n<=0) break;
			}
			if(k+i<=m)
			{
				cout<<(k+i)<<endl;
				n--; 
				if(n<=0) break;
			}
			if(k-i>=1)
			{
				cout<<(k-i)<<endl;
				n--;
				if(n<=0) break;
			}
			if(i<=k)
			{
				i++;
			}
		}
	}
	
	
	return 0;
}
