#include<cstdio>
using namespace std;
char s[100][80];
int main()
{
	int n=0;
	while(scanf("%s",s[n])!=EOF)
	{
		n++;
	}
	for(int i=0;i<n;i++)
	{
		printf("%s",s[n-i-1]);
		if(i!=n-1)
			printf(" ");
	}
	return 0;
}