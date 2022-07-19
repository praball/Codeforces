#include<bits/stdc++.h>
using namespace std;

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,t;
        cin>>s>>t;
        string x = s, y = t;
        int n = s.length(), m = t.length();
        int l = lcm(n,m);
        int a=l/n, b=l/m;
        for(int i=1;i<a;i++)
        {
            s=s+x;
        }
        //cout<<s<<" ";
        for(int i=1;i<b;i++)
        {
            t=t+y;
        }
        //cout<<t<<"\n";
        if(s==t)
        {
            cout<<s<<"\n";
        }
        else
        {
            cout<<"-1\n";
        }
    }
}
