#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int l=0;l<t;l++)
    {
        int k;
        cin>>k;
        int res = __gcd(100, k);
        cout<<100/res<<"\n";
    }
}
