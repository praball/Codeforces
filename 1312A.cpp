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
        float n,m;
        cin>>n>>m;
        float f = n/m;
        int k = n/m;
        //cout<<f<<" "<<k<<"\n";
        if(f==k)
        {
        	cout<<"YES\n";
		}
		else
        {
            cout<<"NO\n";
        }
    }
}
