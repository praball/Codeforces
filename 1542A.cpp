#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int  j = 0 ; j<t ; j++)
    {
        int n;
        cin>>n;
        int b = 2*n;
        int a[b];
        for(int i = 0 ; i<b ; i++)
        {
            cin>>a[i];
        }
        int ce = 0, co = 0;
        for(int  i = 0 ; i<b ; i++)
        {
            if(a[i]%2 == 0)
            {
                ce++;
            }
            else
            {
               co++;
            }
        }
        if(ce==co)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
}
