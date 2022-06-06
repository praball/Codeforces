#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        string s;
        cin>>s;
        int l = s.length(), k=(l/2), flag = 0;
        if(l%2==0)
        {
            for(int i=0;i<(l/2);i++)
            {
                if(s[i]==s[k])
                {
                    
                }
                else
                {
                    flag = 1;
                    break;
                }
                k++;
            }
            if(flag == 0)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
        else
        {
            cout<<"NO\n";
        }
    }
}
