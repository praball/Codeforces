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
        int n;
		cin>>n;
		int a = n, b = 0;
		while(a>0)
		{
			a=a/10;
			b++;
		}
		int res = 0;
		res = (b-1)*9;
		b = pow(10,b);
		b=b/10;				//66 = 60 50 40 30 20 10 9 8 7 6 5 4 3 2 1   b = 10
		n = n / b;
		n=n;
		int re = n + res;
		cout<<re<<"\n";
		
    }
}

/*


9  - 9
42 - 13 (10 20 30 40)
13
100
111



*/
