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
        int a[2], b[2], flag = 0, i = 0;
        cin>>a[0]>>a[1]>>b[0]>>b[1];
        if(a[0]<a[1] && b[0]<b[1] && a[0]<b[0] && a[1]<b[1])
        {
        	cout<<"YES\n";
        	continue;
		}
    	while(i<3)
    	{
    		int t1 = a[0], t2 = b[1];
    		a[0]=b[0];
    		b[1]=a[1];
    		a[1]=t1;
    		b[0]=t2;
    		if(a[0]<a[1] && b[0]<b[1] && a[0]<b[0] && a[1]<b[1])
        	{
        		flag = 1;
        		break;
			}
    		i++;
		}
		if(flag == 0)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
		}
    }
}
