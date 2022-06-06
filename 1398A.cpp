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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int sum = a[0]+a[1];
        if(sum>a[n-1])
        {
            cout<<"-1\n";
        }
        else
        {
            cout<<"1 2 "<<n<<"\n";
        }
    }
}
