#include <bits/stdc++.h>
using namespace std;

string chord(int it1,int it2,int it3)
{
	int d1,d2;
	string x;
	if(it1 > it2)
	{
		d1 = it2 - it1 + 12;
	}
	else{
		d1 = it2 - it1;
	}
	if(it2>it3)
	{
		d2 = it3-it2+12;
	}
	else{
		d2 = it3-it2;
	}
	if(d1==4 && d2 ==3)
	{
		x = "major";
	}
	else if(d1==3 && d2==4)
	{
		x = "minor";
	}
	else x = "strange";
	
	return x;
	
}

int main() {
	vector<string> v = {"C", "C#", "D", "D#", "E", "F", "F#", "G","G#", "A", "B", "H"};
	string a,b,c;
	cin>>a>>b>>c;
	auto it1 = find(v.begin(),v.end(),a) - v.begin();
	auto it2 = find(v.begin(),v.end(),b) - v.begin();
	auto it3 = find(v.begin(),v.end(),c) - v.begin();
	
	vector<string> s(6);
	s[0] = chord(it1,it2,it3);
	s[1] = chord(it1,it3,it2);
	s[2] = chord(it2,it1,it3);
	s[3] = chord(it2,it3,it1);
	s[4] = chord(it3,it1,it2);
	s[5] = chord(it3,it2,it1);
	for(int i=0;i<6;i++)
	{
		if(s[i] == "major" || s[i] == "minor")
		{
			cout<<s[i];
			return 0;
		}
	}
	
	cout<<"strange";
	return 0;
}
