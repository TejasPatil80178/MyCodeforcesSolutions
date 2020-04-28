vector<int> Solution::subUnsort(vector<int> &v) {
    int n = v.size();
    vector<int> b;
    bool flag1 = 1;
	bool flag2 = 1;
	int s = 0;
	int e = n-1;
	while(flag1 || flag2)
	{
		if(v[s+1] >= v[s])
		{
			s++;
		}
		else{
			flag1 = 0;
		}
		
		if(v[e-1] <= v[e])
		{
			e--;
		}
		else{
			flag2 = 0;
		}
		
		if(s>=e)
		{
			b.push_back(-1);
			return b;
		}
	}
	//cout<<s<<" "<<e<<endl;
	int min1 = *min_element(v.begin()+s,v.begin()+e+1);
	int max1 = *max_element(v.begin()+s,v.begin()+e+1);
	//int k1,k2;
	for(int i=0;i<s;i++)
	{
	    if(v[i] > min1)
	    {
	        s = i;
	        break;
	    }
	}
	for(int i=n-1;i>=e+1;i--)
	{
	    if(v[i] < max1)
	    {
	        e = i;
	        break;
	    }
	}
	b.push_back(s);
	b.push_back(e);
	
	return b;
}
