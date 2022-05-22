#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        int a,b,c,m,x=0,y=0,z=0;
        cin>>a>>b>>c>>m;
        int k = max(a,max(b,c));
        if(k!=a)
        {
            x = k-a;
        }
        if(k!=b)
        {
            y=k-b;
        }
        if(k!=c)
        {
            z=k-c;
        }
        if(x+y+z>m)
        {
            cout<<"NO\n";
        }
        else
        {
        	int res = m - (x+y+z);
			if(res%3==0)
			{
				cout<<"YES\n";	
			}
			else
			{
				cout<<"NO\n";	
			}	
        }
    }
}
