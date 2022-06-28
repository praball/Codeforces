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
        int n,m,count=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            if(s[s.length()-1]=='R')
            {
                count++;
            }
            if(i==n-1)
            {
                for(int j=0;j<m;j++)
                {
                    if(s[j]=='D')
                    {
                        count++;
                    }
                }
            }
        }
        cout<<count<<"\n";
    }
}
