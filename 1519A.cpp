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
        long long r,b,d;
        cin>>r>>b>>d;
        long long dif = abs(r-b);
        long long mi = min(r,b);
        long long ans = (dif+mi-1)/mi;
        if(ans <= d)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
/*

                        4
                        1 1 0       YES
                        2 7 3       YES
                        6 1 4       NO
                        5 4 0       NO

*/
