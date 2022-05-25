#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=0, i=1, ans = 0, count  = 0;
	int sum = 0;
	for(i;true;i++)
    {
        sum = sum + i;    
        ans  = ans + sum;
        if(ans<n)
        {
            count++;
        }
        else if(ans == n)
        {
        	count++;
            break;
        }
        else
        {
        	break;
		}
    }
    cout<<count;
}
