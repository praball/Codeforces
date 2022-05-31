#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int  j = 0; j<t;j++)
    {
        int n;
        cin>>n;
        int a = n;
        int sum1 = 0, sum2 = 0;
        for(int  i = 0;i<3;i++)             // 654321 65432 6543 654
        {
            sum1 = sum1 + a%10;
            a = a/10;
        }
        for(int  i = 0;i<3;i++)             // 654 65 6 0
        {
            sum2 = sum2 + a%10;
            a = a/10;
        }
        if(sum1 == sum2)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}
