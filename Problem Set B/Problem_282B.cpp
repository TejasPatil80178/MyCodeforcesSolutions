#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int suma = 0;
	int sumg = 0;
	string s = "";
	while(n>0)
	{
		int x,y;
		cin>>x>>y;
		if(y>x)
		{
			sumg+=y;
			if(abs(sumg-suma) <= 500)
			{
				s+='G';
			}
			else{
				sumg-=y;
				suma+=x;
				if(abs(sumg-suma) <= 500)
				{
					s+='A';
				}
				
			}
		}
		else{
			suma+=x;
			if(abs(sumg-suma) <= 500)
			{
				s+='A';
			}
			else{
				suma-=x;
				sumg+=y;
				if(abs(sumg-suma) <= 500)
				{
					s+='G';
				}
				
			}
		}
		n--;
	}
	
	cout<<s;
}
