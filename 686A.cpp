#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, count=0;
    long long x;
	cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        string a;
        int b;
        cin>>a>>b;
        if(a =="+")
        {
            x=x+b;
        }
        else
        {
            if(x>=b)
            {
                x=x-b;
            }
            else
            {
                count++;
            }
        }
    }
    cout<<x<<" "<<count;
}
