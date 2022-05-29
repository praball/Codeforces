#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j = 0; j<t ; j++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i<n ; i++)
        {
            cin>>a[i];
        }
        int c1 = 0, c2 = 0;
        for(int i = 0; i<n ; i++)
        {
            if(a[i]==1)
            {
                c1++;
            }
        }
        for(int i = 0; i<n ; i++)
        {
            if(a[i]==2)
            {
                c2++;
            }
        }
        if(c1 == 0)
        {
            if(c2%2 == 0)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
        else if(c2 == 0)
        {
            if(c1%2 == 0)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
        else if(c1%2 == 0 && c2%2 == 0)
        {
            cout<<"YES\n";
        }
        else if(c1%2 != 0 && c2%2 == 0)
        {
            cout<<"NO\n";
        }
        else if(c1%2 != 0 && c2%2 != 0)
        {
            cout<<"NO\n";
        }
        else if(c1%2 == 0 && c2%2 != 0)
        {
            cout<<"YES\n";
        }
    }
}

/*
    1 1 2     Y
    2 2 2     X
    1 1 2 2   Y
    1 1 2 2 2 Y
    1 1 1 2   X
    1 2 2     X
*/
