#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n=0;
	char s[1000]={0};
	int tag[1000]={0};
	int p,t,tp,a;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",s);
		p=-1;
		t=-1;
		a=-1;
		tp=0;
		for(int j=0;j<strlen(s);j++)
		{
				if(s[j]=='P')
				{
					if(t==-1&&p==-1)
					{
						p=j;
					}
					else
					{
						tag[i]=0;
						tp=1;
						break;
					}
				}
				else if(s[j]=='A')
				{
					;
				}
				else if(s[j]=='T')
				{
					if(p!=-1&&t==-1)
					{
						t=j;
					}
					else
					{
						tag[i]=0;
						tp=1;
						break;
					}
				}
				else
				{
						tp=1;
						break;
				}
			
			
		}
		if(tp==1)
			tag[i]=0;
		else if(t==p+1)
			tag[i]=0;
		else if((t-p-1)*(p)==(strlen(s)-t-1))
			tag[i]=1;
		else
			tag[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		if(tag[i]==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}