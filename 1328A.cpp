#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    for(int i = 0; i<n;i++)
    {
        long long int a,b;
        int count = 0;
        cin>>a>>b;
        if(a%b==0)
        {
        }
        else
        {
            count = b-(a%b);
        }
        cout<<count<<endl;
    }
}
