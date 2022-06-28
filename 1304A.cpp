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
        int count = 0, flag = 0;
        long long a,b,x,y;
        cin>>x>>y>>a>>b;
        if((y-x)%(a+b)==0)
        {
        	long long res = (y-x)/(a+b);
        	cout<<res<<"\n";
		}
        else
        {
            cout<<"-1\n";
        }
    }
}
