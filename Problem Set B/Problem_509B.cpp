#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	vector<int> v(n);
	vector<vector<int>> ans;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		vector<int> b(v[i],0);
		ans.push_back(b);
	}
	int t = *min_element(v.begin(),v.end());
	int t1 = max_element(v.begin(),v.end()) - v.begin();
	int a = 1;
	for(int i=0;i<n;i++)
	{
		for(int j = 0;j<t;j++)
		{
			ans[i][j] = a;
		}
	}
	while(a<=k)
	{
		int i = 0;
		while(i<n)
		{
			if(ans[i].size()>t)
			{
				ans[i][t]=a;
			}
			i++;
		}
		t++;
		a++;
	}
	if(ans[t1][v[t1] - 1] !=0)
	{
		cout<<"YES"<<endl;
		for(int i=0;i<n;i++)
		{
			for(int j = 0;j<ans[i].size();j++)
			{
				cout<<ans[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	else{
		cout<<"NO";
	}
	return 0;
}
