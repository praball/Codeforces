#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 0 ; i<n ; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int d = abs(a-b);
        d=d*2;
        if(d<a || d<b || d<c)
        {
            cout<<"-1\n";
        }
        else
        {
            int m = d/2;
            if(c-m>0)
            {
                cout<<c-m<<endl;
            }
            else
            {
                cout<<c+m<<endl;
            }
        }
    }
}
