#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin>>n;
    int a = 0, b = 0, c = 0, d = 0;
    while(n--)
    {
    	cin>>x;
    	switch (x)
    	{
    		case 1:
    			a++;
    			break;
    		case 2:
				b++;
				break;
			case 3:
				c++;
				break;
			case 4:
				d++;
				break;			
		}
	}
	int taxi = 0;
	taxi = taxi + d;
	taxi = taxi + c;
	a = a - c;
	if(a<0)
	{
		a=0;
	}
	if(b%2 == 0)
	{
		taxi = taxi + (b/2);
	}
	else
	{
		taxi = taxi + (b/2) + 1;
		a = a - 2;
		if(a<0)
		{	
			a=0;
		}
	}
	taxi = taxi + ceil(a/4.0);
	cout<<taxi;
}
