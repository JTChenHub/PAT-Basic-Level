
#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
char s[10][20]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int main()
{
	int a=0;

	char c[109];
	char p[100];
	scanf("%s",c);
	for(int i=0;i<strlen(c);i++)
	{
		a+=(c[i]-48);
	}
	sprintf(p,"%d",a);
	for(int i=0;i<strlen(p);i++)
	{
		printf("%s",s[p[i]-48]);
		if(i==strlen(p)-1)break;
		printf(" ");
	}
	return 0;
}