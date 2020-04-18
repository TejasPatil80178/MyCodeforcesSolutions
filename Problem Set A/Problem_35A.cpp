#include<bits/stdc++.h>
using namespace std;

int main()
{
	ifstream fi;
	fi.open("input.txt");
	ofstream fo;
	fo.open("output.txt");
	int k;
	fi>>k;
	int i=1;
	while(i<=3)
	{
		int x,y;
		fi>>x>>y;
		if(x==k)
		{
			k = y;
		}
		else if(y==k)
		{
			k = x;
		}
		i++;
	}
	
	fo<<k;
}
