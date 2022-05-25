#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        int a,b, ans = 0;
        cin>>a>>b;
        int k = min(a,b);       //k=a min
        int l = max(a,b);       //l=b max
        if(k*2>=l)
        {
            ans = k*2;
            cout<<ans*ans<<endl;
        }
        else
        {
            cout<<l*l<<endl;
        }
    }
}
