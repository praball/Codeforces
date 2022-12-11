#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long a[n], b[n-1], c[n-2], sum1 = 0, sum2 = 0, sum3 = 0;
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    	sum1 = sum1 + a[i];
	}
	for(int i=0;i<n-1;i++)
    {
    	cin>>b[i];
    	sum2 = sum2 + b[i];
	}
	for(int i=0;i<n-2;i++)
    {
    	cin>>c[i];
    	sum3 = sum3 + c[i];
	}
	int res1 = sum1 - sum2;
	int res2 = sum2 - sum3;
	cout<<res1<<"\n"<<res2; 
}
