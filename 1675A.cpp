#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c,x,y;
        int flag = 0;
        cin>>a>>b>>c>>x>>y;
        long long n=0, m=0;
        n = a-x;
        m = b-y;
        if(n>=0)
        {
            
        }
        else
        {
            c = c - abs(n);
        }
        if(c<0)
        {
            flag = 1;
        }
        if(m>=0)
        {
            
        }
        else
        {
            c = c - abs(m);    
        }
        if(c<0)
        {
            flag = 1;
        }
        flag == 1 ? cout<<"NO\n" : cout<<"YES\n";
    }
}
