#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        string s;
        cin>>s;
        if(s.length()<11)
        {
            cout<<s<<"\n";
        }
        else
        {
            cout<<s[0];
            int count = 0;
            for(int i=1;i<(s.length()-1);i++)
            {
                count++;
            }
            int k=s.length();
            cout<<count<<s[k-1]<<"\n";
        }
    }
}
