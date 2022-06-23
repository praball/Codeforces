#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
		long long a,b,n,mn,count = 1;
		cin>>a>>b>>n;
		while(a+b<=n)
		{
			mn = min(a,b);
			if(mn==a)
			{
				a=a+b;
			}
			else
			{
				b=b+a;
			}
			count++;
		}
		cout<<count<<"\n";
	}
}
