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
        long long prod = 1;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++)
        {
        	cin>>a[i];
        	prod = prod*(a[i]);
		}
        prod = prod + (n-1);
        prod = prod * 2022;
        cout<<prod<<"\n";
    }
}
