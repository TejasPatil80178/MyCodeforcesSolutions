#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> v;
	v.push_back(1);
	if(n!=1)
	{
		v.push_back(n);
	}
	int i=2;
	int k = sqrt(n);
	while(i<=k)
	{
		if(n%i==0)
		{
			n = n/i;
			v.push_back(n);
			break;
		}
		else{
			i++;
		}
	}
	if(i<=k)
	{
		int j = i;
		while(j<n)
		{
			if(n%j==0)
			{
				n = n/j;
				v.push_back(n);
			}
			else{
				if(j%2==0)
				{
					j++;
				}
				else{
					j = j+2;
				}
			}
		}
	}
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" "; 
	}
	return 0;
}
