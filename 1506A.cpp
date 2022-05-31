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
        long long n,m,x;
        cin>>n>>m>>x;
        long long a,b;
        a = (x-1)/n;
        b = (x-1)%n;
        long long res = b*m + (a+1);
        cout<<res<<"\n";
    }
}

/*

n*m : 3*5
x : 11

    _ _ _ _ _
    _ _ _ x _
    _ _ _ _ _

o : 9 

 while(t--){
        cin>>n>>m>>x;

        ll col = (x/n);                   // col = 
        if(x%n != 0)col++;
        ll row = x % n;
        if(row == 0)row = n;

        ll ans = ((row - 1) * m) + col;

        cout<<ans<<"\n";

*/
