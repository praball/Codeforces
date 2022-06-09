#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,n, flag = 0, count = 0;
    cin>>a>>b>>n;
    while(true)
    {
        int g1=0,g2=0;
        g1 = gcd(a,n);
        g2 = gcd(b,n);
        if(count == 0)
        {
            if(g1<=n)
            {
                n=n-g1;
            }
            else
            {
                flag = 1;
                break;
            }
            count++;
        }
        else
        {
            if(g2<=n)
            {
                n=n-g2;
            }
            else
            {
                flag = 2;
                break;
            }
            count--;
        }
        if(flag == 1 || flag == 2)
        {
            break;
        }
    }
    if(flag == 1)
    {
        cout<<"1\n";
    }
    else
    {
        cout<<"0\n";
    }
}
