#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, flag = 0, counto = 0, countn = 0, counte = 0, countz = 0, countr = 0;
    cin>>n;
    int one = 0, zero = 0;
    string s;
    cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='o')
            {
                counto++;
            }
            else if(s[i]=='n')
            {
                countn++;
            }
            else if(s[i]=='e')
            {
                counte++;
            }
            else if(s[i]=='z')
            {
                countz++;
            }
            else if(s[i]=='r')
            {
                countr++;
            }
        }
        if(counto>0 && countn>0 && counte>0)
        {
            one = min(counto, min(countn, counte));
            counto = counto - one;
            counte = counte - one;
        }
        if(countz>0 && counte>0 && countr>0 && counto>0)
        {
            zero = min(countz,min(counte,min(countr,counto)));
        }
    for(int i = 0; i<one;i++)
    {
        cout<<"1 ";
    }
    for(int i = 0;i<zero;i++)
    {
        cout<<"0 ";
    }
}
