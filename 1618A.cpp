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
        int a[7];
        for(int i=0;i<7;i++)
        {
            cin>>a[i];
        }
        int x = a[0], y = a[1], sum = x+y;
        int z = a[6]-sum;
        cout<<x<<" "<<y<<" "<<z<<"\n";
    }
}
