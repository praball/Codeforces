#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, sum = 0;
    cin>>n;
    /* for(long long i=1;i<=n;i++)
    {
    	long long k = (pow(-1,i))*i;
    	//cout<<k<<"\n";
    	sum = sum + k;
	} */
	//cout<<sum;
	if(n%2==0)
	{
		cout<<n/2;
	}
	else
	{
		long long k = (-1)*((n+1)/2);
		cout<<k;
	}
}
