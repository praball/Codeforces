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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int min = 101;
        for(int i=0;i<n;i++)
        {
            if(a[i]<min)
            {
                min = a[i];
            }
        }
        int count = 0;
        for(int i = 0;i<n;i++)
        {
            if(a[i]==min)
            {
                count++;
            }
        }
        cout<<n-count<<"\n";
    }
}
