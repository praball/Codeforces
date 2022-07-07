#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, flag = 0;
	cin>>t;
	for(int l=0;l<t;l++)
	{
		int n,k;
		cin>>n>>k;
		int count = k;
		if(n%2==0)
		{
			int a = n/2;
			if(k>a)
			{
				cout<<"-1\n";
			}
			else
			{
				for(int i=1;i<=n;i++)
				{
					for(int j=1;j<=n;j++)
					{
						if(count>0 && i%2!=0 && j%2!=0 && i==j)
						{
							cout<<"R";
							count--;
						}
						else
						{
							cout<<".";
						}
					}
					cout<<"\n";
				}
			}
		}
		else
		{
			int a = (n/2)+1;
			if(k>a)
			{
				cout<<"-1\n";
			}
			else
			{
				for(int i=1;i<=n;i++)
				{
					for(int j=1;j<=n;j++)
					{
						if(count>0 && i%2!=0 && j%2!=0 && i==j)
						{
							cout<<"R";
							count--;
						}
						else
						{
							cout<<".";
						}
					}
					cout<<"\n";
				}
			}
		}
	}
}

/* 

1 = 1
2 = 1
3 = 2
4 = 2
5 = 3 
6 = 3
7 = 4
8 = 4

x					

x -					
- -

x - -
- - -
- - x

x - - -
- - - -
- - x -
- - - -

x - - - -
- - - - -
- - x - -
- - - - -
- - - - x

x - - - - -
- - - - - -
- - x - - -
- - - - - -
- - - - x -
- - - - - -

x - - - - - -
- - - - - - -
- - x - - - -
- - - - - - -
- - - - x - -
- - - - - - -
- - - - - - x

*/
