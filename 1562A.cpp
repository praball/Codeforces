#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        long long l,r;
        cin>>l>>r;
        long long p = r/2;
        if(r%2 != 0 && l<=p+1)
        {
        	cout<<p<<"\n";
		}
		else if(r%2 != 0 && l>p+1)
		{
			cout<<r-l<<"\n";
		}
		else if(r%2 == 0 && l<=p+1)						// 10-	4:2 5:0 6:4 7:3
		{
    		cout<<p-1<<"\n";
		}
		else
		{
			cout<<r-l<<"\n";
		}
	}
}
/*
		int max = 0;
        for(long long a = l+1; a<=r; a++)
        {
            for(long long b = l; b<=a; b++)
            {
                if((a%b)>max)
                {
                    max = a%b;
                }
            }
        }
        cout<<max<<"\n";
*/
