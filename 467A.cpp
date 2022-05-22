#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        int k = b-a;
        if(k>=2)
        {
            count++;
        }
    }
    cout<<count;
}
