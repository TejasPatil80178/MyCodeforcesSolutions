bool isPrime(ll n) 
{ 
	bool flag = 1;
	if(n<2)
	{
		flag = 0;
	}
	else if(n%2==0)
	{
		flag = 0;
	}
	else{
		for(int i=3;i<=sqrt(n);i=i+2)
		{
			if(n%i==0)
			{
				flag = 0;
				break;
			}
		}
	}
    return flag;
} 
 
