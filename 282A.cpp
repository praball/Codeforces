#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, count = 0;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        string s;
        cin>>s;
        if(s[1]=='+')
        {
            count = count+1;
        }
        else
        {
            count = count-1;
        }
    }
    cout<<count;
}
