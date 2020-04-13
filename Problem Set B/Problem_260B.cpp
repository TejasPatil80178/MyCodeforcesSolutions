#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	vector<string> v = {"2013","2014","2015"};
	vector<int> od = {1,3,5,7,8,10,12};
	vector<int> en = {4,6,9,11};
	int feb = 2;
	map<string,int> m;
	int i =0;
	auto it = 0;
	int max = INT_MIN;
	string c;
	while(i<3)
	{
		it = s.find(v[i],it);
		if(it!=string::npos)
		{
			string temp = s.substr(it-6,10);
			if(temp[0]!='-' && temp[1]!='-' && temp[2]=='-' && temp[3]!='-' && temp[4]!='-'&& temp[5]=='-')
			{
				int mm = (temp[3]-'0')*10 + (temp[4]-'0');
				int dd = (temp[0]-'0')*10 + (temp[1]-'0');
				auto it1 = find(od.begin(),od.end(),mm);
				if(it1!=od.end())
				{
					if(dd <= 31 && dd>0)
					{
						m[temp]++;
					}
				}
				it1 = find(en.begin(),en.end(),mm);
				if(it1!=en.end())
				{
					if(dd <= 30 && dd>0)
					{
						m[temp]++;
					}
				}
				if(mm == 2)
				{
					if(dd <= 28 && dd>0)
					{
						m[temp]++;
					}
				}
				if(m[temp] > max)
				{
					max = m[temp];
					c = temp;
				}
			}
			it++;
		}
		else{
			i++;
			it = 0;
		}
	}
	cout<<c;
	
	return 0;
}
