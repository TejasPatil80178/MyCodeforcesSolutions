#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	bool flag1 = 0;
	int sum = 0;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		sum+=v[i];
		if(v[i]==0)
		{
			flag1 = 1;
		}
	}
	if(flag1 == 0)
	{
		cout<<-1;
	}
	else{
		sort(v.begin(),v.end());
		int x = sum%3;
		int i =0;
		while(sum%3!=0)
		{
			while(i<v.size())
			{
				if(v[i]%3==x)
				{
					sum-=v[i];
					v.erase(v.begin() + i);
					if(sum%3==0) break;
				}
				else{
					i++;
				}
			}
			if(sum%3!=0)
			{
				if(x==1) x++;
				else x--;
				i=0;
			}
		}
		reverse(v.begin(),v.end());
		if(v[0]==0)
		{
			cout<<0;
		}
		else{
			for(int i=0;i<v.size();i++)
			{
				cout<<v[i];
			}
		}
		
	}
	
	return 0;
}
