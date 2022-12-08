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
        int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++)
        {
        	cin>>a[i];
		}
        int flag = 0;
        sort(a,a+n);
        for(int i=1;i<n;i++)
        {
        	if(a[i]==a[i-1])
        	{
        		flag = 1;
        		break;
			}
		}
		if(flag==1)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
		}
    }
}
