#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int max = INT_MIN;
	if(n<4)
	{
		cout<<n;
		return 0;
	}
	else{
		vector<int> v(n,0);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		for(int i=0;i<n;i++)
		{
			int l = 0;
			int r = 0;
			int k = i;
			while(v[k] >= v[k-1] && k>=1)
			{
				l++;
				k--;
			}
			k = i;
			while(v[k] >= v[k+1] && k<n-1)
			{
				r++;
				k++;
			}
			cout<<l<<" "<<r<<endl;
			if((l+r+1) > max)
			{
				max = l+r+1;
			}
			
		}
		
		cout<<max;
	}
	return 0;
}
