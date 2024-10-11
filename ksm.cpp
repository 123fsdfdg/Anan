
long long qmi(long long a,long long b,long long p)
{
	long long res=1%p;
	while(b)
	{
		if(b&1)
			res=res*a%p;
		a=a*a%p;
		b>>=1;
	}
	return res;
}

/*
  食用指南
  就是一个快速幂~没啥指南，计算a^b mod p的
 */
