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
        int n, k, a = 1, diff = 0;		// k integers in
        cin>>k>>n;						// 1 to n
        if(n==k)
        {
        	for(int i=1;i<=n;i++)		// avg case
        	{
        		cout<<i<<" ";
			}
			cout<<"\n";
		}
		else
		{
			for(int i=0;i<k;i++)
			{
				if(n-a+1>=k)		//diff+1 >= the number
				{
					a = a+i;		// incremental case
				}
				else
				{
					a++;			// limiting case
				}
				cout<<a<<" ";
			}
			cout<<"\n";
		}
    }
}
// 5 9
// 1 3 4 7 8
// 1 2 4 7 8
