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
        string s;
        cin>>s;
        int a = 0, b = 0, c = 0;
        for(int i=0;i<s.length();i++)
    	{
    		if(s[i]=='0')
    		{
    			a++;
			}
			else
			{
				b++;
			}
		}
		c = min(a,b);
		if(c%2==0)
		{
			cout<<"NET\n";
		}
		else
		{
			cout<<"DA\n";
		}
    }
}
