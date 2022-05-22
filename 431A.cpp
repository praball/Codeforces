#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    int count = 0;
    int l = s.length();
    for(int i = 0;i<l;i++)
    {
        if(s[i]=='1')
        {
            count = count + a;
        }
        else if(s[i]=='2')
        {
            count = count + b;
        }
        else if(s[i]=='3')
        {
            count = count + c;
        }
        else if(s[i]=='4')
        {
            count = count + d;
        }
    }
    cout<<count;
}
