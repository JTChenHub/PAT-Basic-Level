#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
struct food{

	double num,total_price;
	double avg_price;
} f[1011];
bool cmp(struct food a,struct food b){

	return a.avg_price>b.avg_price;
}
int main()
{
	int N;
	double need;
	double s=0;
	double num=0;
	cin>>N>>need;
	for(int i=0;i<N;i++)
	{
		cin>>f[i].num;
	}
	for(int i=0;i<N;i++)
	{
		cin>>f[i].total_price;
		f[i].avg_price=f[i].total_price/(f[i].num);
	}

	sort(f,f+N,cmp);
	int cnt=0;
	while((num-need)<0.000001&&cnt<N)
	{
		if(((f[cnt].num+num)-need)<0.000001)
		{
			s+=f[cnt].total_price;
			num+=f[cnt].num;
		}
		else
		{
			s+=((need-num)*f[cnt].avg_price);
			num+=(need-num);
			break;
		}
		cnt++;
	}
	printf("%.2lf",s);
	return 0;
}