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
        long long a,b,k;
        cin>>a>>b>>k;
        long long ans = 0;
        if(k%2==0)
        {
        	int x = k/2;
        	a=(a)*(x);
        	b=(b)*x;
        	ans = a-b;
		}
		else
		{
			int x = k/2;
			a=(a)*(x+1);
			b=(b)*x;
			ans = a-b;			
		}
		cout<<ans<<"\n";
    }
}
/*
for(long long i=0;i<k;i++)
        {
            if(count==0)
            {
                ans = ans + a;
                count++;
            }
            else
            {
                ans = ans - b;
                count--;
            }
        }
        cout<<ans<<"\n";
    
*/
