#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int c[11];
int b[110];
int main()
{
	int n=0;
	while(scanf("%d",&c[n])!=-1)
	{
		n++;
		if(n==10)break;
	}
	
	int i=0;
	int j=0;
	while(i<10)
	{
		if(c[i]!=0)
		{
			c[i]--;
			b[j]=i;
			j++;
		}
		else
			i++;
	}
	sort(b,b+j);
	i=0;
	while(b[i]==0)
		i++;
	int temp=b[i];
	b[i]=b[0];
	b[0]=temp;
	for(i=0;i<j;i++)
	{
		printf("%d",b[i]);
	}
	return 0;
}