#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	vector<int> a(n);
	vector<int> b(m);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i =0;i<m;i++)
	{
		cin>>b[i];
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	reverse(b.begin(),b.end());
	int j = n-1;
	int i = 0;
	int k = 0;
	while(j>=0 && !b.empty() && i<m)
	{
		auto it = find(b.begin(),b.end(),a[j]);
		if(it == b.end())
		{
			if(b[i] > a[j])
			{
				i++;
				j--;
			}
			else{
				k++;
				j--;
			}
		}
		else{
			b.erase(it);
			j--;
		}
	}
	
	cout<<max(k,n-m);
	
	return 0;
}
