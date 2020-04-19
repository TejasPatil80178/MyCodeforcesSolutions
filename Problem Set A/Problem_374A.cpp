#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,i,j,a,b;
	cin>>n>>m>>i>>j>>a>>b;
	int arr[4][2] = {{1,1},{1,m},{n,1},{n,m}};
	int k = -1;
	int min = INT_MAX;
	for(int l=0;l<4;l++)
	{
		if(i==arr[l][0] && j==arr[l][1]) {
			cout<<0;
			return 0;
		}
		int x = abs(arr[l][0] - i)%a;
		int y = abs(arr[l][1] - j)%b;
		if(x==0 && y==0)
		{
			if((abs(arr[l][0] - i)/a)%2==0 && (abs(arr[l][1] - j)/b)%2==0 || (abs(arr[l][0] - i)/a)%2!=0 && (abs(arr[l][1] - j)/b)%2!=0)
			{
				k = max(abs(arr[l][0] - i)/a,abs(arr[l][1] - j)/b);
				if(k<min)
				{
					min  = k;
				}
			}
		}
	}
	if(k == -1 || (i+a)>n && (i-a)<1 || (j+b)>m && (j-b)<1)
	{
		cout<<"Poor Inna and pony!";
	}
	else{
		cout<<min;
	}
	return 0;
}
