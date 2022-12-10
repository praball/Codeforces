#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	sort(a,a+n);
	int q;
	cin>>q;
	while(q--)
	{
		int k;
		cin>>k;
		int res = upper_bound(a,a+n,k)-a;
		cout<<res<<"\n";
	}
}
