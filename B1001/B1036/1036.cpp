#include<cstdio>
#include<iostream>
using namespace std;
int t[30][30]={0};
int main()
{
	int a,b;
	char c;
	scanf("%d %c",&a,&c);
	b=a/2;
	if(a%2)
		b++;
	for(int i=0;i<a;i++)
	{
		t[0][i]=1;
		t[b-1][i]=1;
	}
	for(int i=0;i<b;i++)
	{
		t[i][0]=1;
		t[i][a-1]=1;
	}
	for(int i=0;i<b;i++)
	{
		for(int j=0;j<a;j++)
	{
		if(t[i][j])
			cout<<c;
		else
			cout<<' ';
		
	}
		cout<<"\n";
	}
	return 0;
}