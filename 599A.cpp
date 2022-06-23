#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long a,b,c,mn=0,dis=0;
	cin>>a>>b>>c;
	int flag = 0;
	mn = min(a,b);
	if(mn==a)
	{
		dis = dis + a;
		flag = 1;
	}
	else
	{
		dis = dis + b;
		flag = 2;
	}
	if(a+b<=c)
	{
		dis = dis + a + b;
	}
	else
	{
		dis = dis + c;
	}
	if(flag == 1)
	{
		if(b<c+a)
		{
			dis = dis + b; 
		}
		else
		{
			dis = dis + a + c;
		}
	}
	else
	{
		if(a<b+c)
		{
			dis = dis + a;
		}
		else
		{
			dis = dis + b + c;
		}
	}
	cout<<dis;
}
