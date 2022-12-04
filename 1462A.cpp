#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++)
        {
        	cin>>a[i];
		}
        vector<int> v;
        int r=n-1, l=0;
        while(r>=l)
        {
        	v.push_back(a[l]);
        	if(r==l)
        	{
        		break;
			}
			else
			{
				v.push_back(a[r]);
			}
			r--;
			l++;
		}
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<"\n";
	}
}

/*

   for(int i=0;i<n;i=i+2)
        {
        	v.push_back(a[i]);
		}
		if(n==1)
		{
		}
		else if(n%2==0)
		{
			for(int i=n-1;i>0;i=i-2)
			{
				v.push_back(a[i]);
			}
		}
		else
		{
			for(int i=n-2;i>0;i=i-2)
			{
				v.push_back(a[i]);
			}
		}
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<"\n";

*/
