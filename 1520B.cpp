#include<bits/stdc++.h>
using namespace std;

int main()
{
	const int MAX = 10;
    int t;
    cin>>t;
    int n;
    while(t--)
	{
	    cin>>n;
   	 	int arr[MAX];
    	int r = log10(n);
    	int tmp = 0;
    	for (int i = 0; i < r+1; i++) 
		{
      		tmp = tmp * 10 + 1;
    	}
    cout<<(r * 9 + n / tmp)<<endl;
  	}
}
