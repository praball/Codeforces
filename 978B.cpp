#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, cnt = 0, tot = 0, fl = 0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
    	if(s[i] == 'x')				// xxxzxxxxxz
    	{
    		cnt++;
    		if(cnt == 3)
			{
				tot++;
				cnt--;
				fl = 1;
			}
			else if(cnt == 2 && fl == 1)
			{
				tot++;
			}
			else
			{
				//cout<<cnt<<" ";
			}	
		}
		else
		{
			cnt = 0;
			fl = 0;
		}
	}
	cout<<tot;
}
