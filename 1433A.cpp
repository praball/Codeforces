#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int j = 0 ; j<t ; j++)
	{
		int n;
		cin>>n;
		int a = n;
		int digit = n%10, count = 0;
		while(a>0)
		{
			a=a/10;
			count++;
		}
		int res = 0, ans = 0;
		if(count == 1)						//  n  =  2  or  5  or  7 
		{
			while(digit>1)
			{
				ans = ans + 10;
				digit = digit - 1;
			}
			res = ans + 1;
			cout<<res<<endl;
		}
		else if(count == 2)					//  n  =  22  or  55  or  77
		{
			while(digit>1)
			{
				ans = ans + 10;
				digit = digit - 1;
			}
			res = ans + 3;
			cout<<res<<endl;
		}
		else if(count == 3)
		{
			while(digit>1)
			{
				ans = ans + 10;
				digit = digit - 1;
			}
			res = ans + 6;
			cout<<res<<endl;
		}
		else 
		{
			while(digit>1)
			{
				ans = ans + 10;
				digit = digit - 1;
			}			
			res = ans + 10;
			cout<<res<<endl;
		}
	}
}
