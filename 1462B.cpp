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
		int n, flag = 0;
		cin>>n;
		string s;
		cin>>s;
		if(s[0]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0')
		{
			flag = 1; 
		}
		else if(s[0]=='2' && s[1]=='0' && s[n-2]=='2' && s[n-1]=='0')
		{
			flag = 1;
		}
		else if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[n-1]=='0')
		{
			flag = 1;
		}
		else if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[3]=='0')
		{
			flag = 1;
		}
		else if(s[n-4]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0')
		{
			flag = 1;
		}
		if(flag == 1)
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

if(s[0]=='2')									// 211451020   201651520   20251530   202035165
		{
			if(s[1]!='0')
			{
				if(s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0')
				{
					flag = 1;
					break;
				}
			}
			else
			{
				if(s[1]=='0' && s[2]!='2')
				{
					if(s[n-2]=='2' && s[n-1]=='0')
					{
						flag = 1;
						break;
					}
				}
				else
				{
					if(s[2]=='2' && s[3]!='0')
					{
						if(s[n-1]=='0')
						{
							flag = 1;
							break;
						}
					}
					else
					{
						if(s[3]=='0')
						{
							flag = 1;
							break;
						}
					}
				}
			}
		}
		else											// 1452020   n = 7
		{
			if(s[n-4]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0')
			{
				flag = 1;
				break;
			}
		}

*/
