#include<bits/stdc++.h>
using namespace std;

int main()
{

    int x,y,n,t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n;
        cout<<(n-y)/x*x+y<<endl;
    }
}
