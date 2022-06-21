#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int l = 0;l<t;l++)
    {
        string s;
        cin>>s;
        int c1=0, c0=0;
        for(int i = 0;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                c0++;
            }
            else
            {
                c1++;
            }
        }
        if(c1==0 || c0==0 || s.length()<3)
        {
            cout<<"0\n";
        }
        else if(c1==c0)
        {
        	cout<<c1-1<<"\n";
		}
        else
        {
        	cout<<min(c0,c1)<<"\n";
        }
    }
}


//objects, arrays, strings, map methods
