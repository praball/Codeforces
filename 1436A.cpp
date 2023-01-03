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
        int n, m, sum = 0;
        cin>>n>>m;
        long long a[n];
        for(int i=0;i<n;i++)
        {
        	cin>>a[i];
        	sum += a[i];
		}
        if(sum==m)
        {
        	cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
    }
}
