#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    for(int j = 0;j<t;j++)
    {
        int n;
        cin>>n;
        if(n%7==0)
        {
            cout<<n<<"\n";
        }
        else
        {
            n=n/10;
            n=n*10;
            while(n%7 != 0)
            {
                n=n+1;
            }
            cout<<n<<"\n";
        }
    }
}
