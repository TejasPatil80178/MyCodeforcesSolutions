#include<bits/stdc++.h>
using namespace std;

double dist(int x1,int y1,int x2,int y2)
{
	return pow(x2-x1,2) + pow(y2-y1,2);
}

bool right(vector<int> v)
{
	vector<double> b(3);
	b[0] = dist(v[0],v[1],v[2],v[3]);
	b[1] = dist(v[0],v[1],v[4],v[5]);
	b[2] = dist(v[2],v[3],v[4],v[5]);
	sort(b.begin(),b.end());
	if(b[2]==b[1]+b[0] && b[0]>0 && b[1]>0 &&b[2]>0){
		return 1;
	}
	else return 0;
}

int main()
{
	vector<int> a(6);
	for(int i=0;i<6;i++)
	{
		cin>>a[i];
	}
	if(right(a)){
		cout<<"RIGHT";
		return 0;
	}
	else{
		int i=0;
		int k = 1;
		while(i<6)
		{
			a[i]+=k;
			if(right(a)){
				cout<<"ALMOST";
				return 0;
			}
			else{
				a[i]-=k;
			}
			i++;
		}
		i=0;
		while(i<6)
		{
			a[i]-=k;
			if(right(a)){
				cout<<"ALMOST";
				return 0;
			}
			else{
				a[i]+=k;
			}
			i++;
		}
		cout<<"NEITHER";
	}
	
	return 0;
}
