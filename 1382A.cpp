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
        int n,m,res=0,flag=0;
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int k=0;k<m;k++)
            {
                if(a[i]==b[k])
                {
                    res = a[i];
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
            	break;
			}
        }
        if(flag==1)
        {
        	cout<<"YES\n"<<"1 "<<res<<"\n";
    	}
    	else
    	{
    		cout<<"NO\n";
		}
    }
}
