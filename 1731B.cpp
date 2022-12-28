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
        long long n;
        cin>>n;
		long long m = 1e9+7;
		long long res = (((n*(n+1))%m)*(((4*n)-1))%m*337)%m;
        cout<<res<<"\n";
    }
}

/*

2: 7
1 2
2 4

3: 22
1 2 3
2 4 6
3 6 9 

4: 50
1 2 3  4
2 4 6  8
3 6 9  12
4 8 12 16


			for(int i=3;i<=n;i++)
			{
				res = res%1000000007;
				res = res + (i*(i-1))%1000000007 + (i*i)%1000000007;
			}
        	res = res*2022;
        	res = res%1000000007;
        	cout<<res<<"\n";

*/
