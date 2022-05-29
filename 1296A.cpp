#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int  j = 0 ; j<t ; j++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int  i = 0 ; i<n ; i++)
        {
            cin>>a[i];
        }
        int ce = 0, co = 0;
        for(int  i = 0 ; i<n ; i++)
        {
            if(a[i]%2 == 0)
            {
                ce++;
            }
            else
            {
               co++;
            }
        }
		if(n%2==0)                      // 5555  4422 7512 2233
        {
            if(ce == 0)
            {
                cout<<"NO\n";
            }
            else if(co == 0)
            {
                cout<<"NO\n";
            }
            else
            {
                cout<<"YES\n";
            }
        }
        else
        {                           // 333 222 332 
            if(ce == 0)
            {
                cout<<"YES\n";
            }
            else if(co == 0)
            {
                cout<<"NO\n";
            }
            else
            {
                cout<<"YES\n";
            }
        }
    }
}
