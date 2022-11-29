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
        long long a,b,c,d=0,e=0;
        cin>>a>>b>>c;
        d = abs(a-1);
        e = abs(b-c)+abs(c-1);
        long long res = min(d,e);
        if(d==e)
        {
        	cout<<"3\n";
		}
        else if(res==d)
        {
        	cout<<"1\n";
		}
		else
		{
			cout<<"2\n";
		}
    }
}
