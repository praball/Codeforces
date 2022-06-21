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
        int flag = 0, flag1 = 0, flag2 = 0, flag3 = 0;
        string s;
        cin>>s;
        if(s[0]=='R'|| s[0]=='G' || s[0]=='B')
        {
            flag = 1;
        }
        else
        {
            for(int i=1;i<s.length();i++)
            {
                if(s[i]=='R')
                {
                    for(int k=0;k<i;k++)
                    {
                        if(s[k]=='r')
                        {
                            flag1 = 1;
                        }
                    }
                    if(flag1 == 0)
                    {
                        flag = 1;
                        break;
                        //cout<<"Hey";
                    }
                }
                else if(s[i]=='G')
                {
                    for(int k=0;k<i;k++)
                    {
                        if(s[k]=='g')
                        {
                            flag2 = 1;
                            //cout<<"ok";
                            break;
                        }
                    }
                    if(flag2 == 0)
                    {
                        flag = 1;
                        cout<<"Hey";
                    }
                }
                else if(s[i]=='B')
                {
                    for(int k=0;k<i;k++)
                    {
                        if(s[k]=='b')
                        {
                            flag3 = 1;
                            break;
                        }
                    }
                    if(flag3 == 0)
                    {
                        flag = 1;
                    }
                }
            }
        }
        if(flag == 1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
}
