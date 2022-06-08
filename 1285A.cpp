#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='L')
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    int res = 1+c1+c2;
    cout<<res;
}
