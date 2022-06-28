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
        n = pow(2,n)-1;
		cout<<n<<"\n"; 
    }
}
