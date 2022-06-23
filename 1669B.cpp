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
		int n, count = 0;
		cin>>n;
		int res = 0;
		map<long long,long long> m;
		for(int i=0;i<n;i++)
		{
			long long x;
			cin>>x;
			m[x]++;
		}
		for(int i=1;i<=n;i++)
		{
			if(m[i]>2)
			{
				res = i;
				break;
			}
		}
		if(res==0)
		{
			cout<<"-1\n";
		}
		else
		{
			cout<<res<<"\n";
		}
	}
}
