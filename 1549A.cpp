#include<bits/stdc++.h>
using namespace std;

/*
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        long long n;
        cin>>n;
        int a[n-1];
        if(n==5)
        {
        	cout<<"2 4\n";
		}
		else
		{
        for(int i=2;i<n-1;i++)
        {
        	int md = n%i;
        	a[i] = md;
		}
		int flag = 0, x = 0, y = 0;
		for(int i=2;i<n-2;i++)
		{
			for(int k=3;k<n-1;k++)
			{
				if(a[i]==a[k])
				{
					flag = 1;
					x=i;
					y=k;
					break;
				}
			}
			if(flag==1)
			{
				break;
			}
		}
		cout<<x<<" "<<y<<"\n";
		}
    }
}
*/

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		long long n;
		cin>>n;
		cout<<(n-1)/2<<" "<<n-1<<"\n";
	}
}
