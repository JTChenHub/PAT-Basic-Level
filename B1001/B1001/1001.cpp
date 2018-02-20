#include<cstdio>
#include<iostream>
using  namespace std;
int main()
{
	int a;
	int i=0;
	scanf("%d",&a);
	while(a!=1)
	{
		if(a%2)
		{
			a=(3*a+1)/2;
			i++;
		}
		else
		{
			a=a/2;
			i++;
		}
	}
	cout<<i;
}