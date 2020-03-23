#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<double> v;
	for(int i =0;i<3;i++)
	{
		double temp;
		cin>>temp;
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	double b = sqrt((v[0]*v[2]) / v[1]);
	double a = (v[1]/v[2]) * b;
	double c = v[2] / b;
	cout<<4*(a+b+c);
	return 0;
}
