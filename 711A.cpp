#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string s;
    for(int j=0;j<5*n;j++)
    {
        cin>>s[j];
    }
    int flag = 0;
    //for(int i = 0;i<5*n;i=i+3)
    int i = 0, count = 0;
	while(i<5*n)
	{
    	if(s[i]=='O' && s[i+1]=='O')
    	{
    		s[i]='+';
   			s[i+1]='+';
			flag = 1;
			break;
		}
		if(count == 0)
		{
			i=i+3;
			count++;
		}
		else
		{
			i=i+2;
			count--;
		}
	}
    
    if(flag == 1)
    {
    	cout<<"YES\n";
		for(int j=0;j<5*n;j++)
    	{
       		 cout<<s[j];
        	if((j+1)%5==0)
        	{
        		cout<<"\n";
			}
    	}
	}
	else
	{
		cout<<"NO\n";
	}
}

/*

6
OO|OX
XO|XX
OX|OO
XX|OX
OO|OO
OO|XX

*/
