#include <bits/stdc++.h>
using namespace std;

int main() {
	int na,ma,nb,mb;
	cin>>na>>ma;
	vector<string> v(na);
	for(int i=0;i<na;i++)
	{
		cin>>v[i];
	}
	cin>>nb>>mb;
	vector<string> v1(nb);
	for(int i=0;i<nb;i++)
	{
		cin>>v1[i];
	}
	int k = INT_MIN;
	int x1 = 0;
	int x2 = 0;
	for(int x =-na;x<=nb;x++)
	{
		for(int y = -ma;y<=mb;y++)
		{
			int sum = 0;
			for(int i=0;i<na;i++)
			{
				for(int j=0;j<ma;j++)
				{
					if(i+x>=0 && i+x<nb && j+y>=0 &&j+y<mb)
					{
						if(v[i][j]=='1' && v1[i+x][j+y]=='1')
						{
							sum++;
						}
					}
				}
			}
			if(sum>k)
			{
				k = sum;
				x1 = x;
				x2 = y;
			}
		}
	}
	cout<<x1<<" "<<x2;
	return 0;
}
