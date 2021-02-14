#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	vector<int> v(n,0);
	for(int i = 0;i<n;i++) cin>>v[i];
	vector<int> res;
	bool flag = 0;
	for(int i = 0;i<n;i++){
		if(i==0){
			flag = 0;
		}
		else{
			if(res[i-1] == 1){
				flag = 1;
			}
			else{
				flag = 0;
			}
		}
		while(v[i] > 1){
			if(v[i]%2==1) v[i] = v[i]-1;
			else v[i] = v[i]%2;
			
			if(flag) flag = 0;
			else flag = 1;
		}
		if(flag == 0){
			res.push_back(2);
		}
		else{
			res.push_back(1);
		}
		
	}
	for(int i = 0;i<res.size();i++){
		cout<<res[i]<<"\n";
	}
	return 0;
}
