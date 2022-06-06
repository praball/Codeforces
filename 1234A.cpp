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
        long long a[n], sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum = sum + a[i];
        }
        if(sum%n==0)
        {
            cout<<(sum/n)<<"\n";
        }
        else
        {
            cout<<(sum/n)+1<<"\n";
        }
    }
}
