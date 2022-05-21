#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count = 0;            //1, 5, 10, 20,  100
    cin>>n;
    do
	{
	if(n>=100)
    {
        n=n-100;
        count++;
    }
    else if(n>=20)
    {
        n=n-20;
        count++;
    }
    else if(n>=10)
    {
        n=n-10;
        count++;
    }
    else if(n>=5)
    {
        n=n-5;
        count++;
    }
    else
    {
        n=n-1;
        count++;
    }
	}while(n!=0);
    cout<<count;
}
