#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int l =0;l<t;l++)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long long res = (a + b + c)/2;
        cout<<res<<"\n";
    }
}
