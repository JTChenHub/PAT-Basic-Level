#include<cstdio>
#include<iostream>
using namespace std;
long long y[30]={0};
int mainc()
{
	long long a,b;
	int d;
	int i=0;
	scanf("%lld %lld %d",&a,&b,&d);
	a+=b;

	while(a>=d)
	{
		y[i]=a%d;
		i++;
		a=a/d;
	}
	y[i]=a;
	while(i>=0)
	{
		cout<<y[i];
		i--;
	}
	return 0;
}