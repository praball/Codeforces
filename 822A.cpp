#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    cin>>a>>b;
    long long res = min(a,b), ans = 1;
    for(int i = res; res>0;res--)
    {
        ans = ans * res;
    }
    cout<<ans<<"\n";
}
/*
    1: 1    1
    2: 2    
    3: 6
    4: 24
*/
