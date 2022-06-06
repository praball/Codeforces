#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        if(a==b)
        {
            if(c%2==0)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
        else if(b==c)
        {
            if(a%2==0)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
        else if(a==c)
        {
            if(b%2==0)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
        else
        {
            int mx = max(a,max(b,c));
            if(mx==a)
            {
                if((b+c)==a)
                {
                    cout<<"YES\n";
                }
                else
                {
                    cout<<"NO\n";
                }
            }
            else if(mx==b)
            {
                if((a+c)==b)
                {
                    cout<<"YES\n";
                }
                else
                {
                    cout<<"NO\n";
                }
            }
            else
            {
                if((b+a)==c)
                {
                    cout<<"YES\n";
                }
                else
                {
                    cout<<"NO\n";
                }
            }
        }
    }
}
