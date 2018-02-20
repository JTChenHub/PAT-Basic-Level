#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int s[100009];
int main()
{
	int n;
	int a,b;
	int f=0;
	int t=1;
	int i;
	scanf("%d",&n);
	memset(s,0,sizeof(s));
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		s[a]=s[a]+b;

	}
	
	for(i=0;i<n;i++)
	{
		if(s[i]>s[t])
		{
			t=i;

		}
	}
	printf("%d %d",t,s[t]);
	return 0;
}