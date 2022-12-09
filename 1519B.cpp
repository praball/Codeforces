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
    	int n,m,k;
    	cin>>n>>m>>k;
    	int res = (n*m)-1;
		if(res == k)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
    }
}

/*

* *
* *			= 1+2 = 3

* * *
* * *		= 1+1+3 = 5

* * *
* * *
* * *		= 1+1+3+3 = 8

*/
