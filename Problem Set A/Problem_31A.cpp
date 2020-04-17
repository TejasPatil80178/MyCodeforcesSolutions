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
	vector<int> b = v;
	sort(b.begin(),b.end());
	reverse(b.begin(),b.end());
	int i=0;
	while(i<n-1)
	{
		int j=i+1;
		while(j<n)
		{
			int k = n-1;
			while(b[i]>(b[j] + b[k]) && k>j)
			{
				k--;
			}
			if(b[i]==b[j]+b[k] && j!=k)
			{
				auto it1 = find(v.begin(),v.end(),b[i]);
				auto it2 = find(v.begin(),v.end(),b[j]);
				auto it3 = find(it2+1,v.end(),b[k]);
				if(it3==v.end())
				{
					it3 = find(v.begin(),v.end(),b[k]);
				}
				cout<<(it1-v.begin())+1<<" "<<(it2-v.begin())+1<<" "<<(it3-v.begin())+1;
				return 0;
			}
			j++;
		}
		i++;
	} 
	cout<<-1;
	return 0;
}
