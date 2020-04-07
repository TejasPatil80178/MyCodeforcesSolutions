#include <bits/stdc++.h>
using namespace std;

int main() {
	ifstream i;
	i.open("input.txt",ios::in);
	ofstream o;
	o.open("output.txt",ios::out);
	int n,k;
	i>>n;
	i>>k;
	vector<int> v(n,0);
	for(int j=0;j<n;j++)
	{
		i>>v[j];
	}
	
	int min = INT_MAX;
	vector<int> v1;
	while(k>0)
	{
		int t = max_element(v.begin(),v.end()) - v.begin();
		v1.push_back(t+1);
		if(v[t] < min)
		{
			min = v[t];
		}
		v[t] = -1;
		k--;
	}
	o<<min<<endl;
	for(int j=0;j<v1.size();j++)
	{
		o<<v1[j]<<" ";
	} 
	i.close();
	o.close();
	return 0;
}
