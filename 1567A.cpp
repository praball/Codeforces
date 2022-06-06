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
        int i;
        cin>>i;
        string s;
        cin>>s;
        for(int k=0;k<i;k++)
        {
            if(s[k]=='U')
            {
            	cout<<"D";
            }
            else if(s[k]=='D')
            {
            	cout<<"U";
            }
            else if(s[k]=='L')
            {
            	cout<<"L";
            }
            else if(s[k]=='R')
            {
            	cout<<"R";
            }
        }
        cout<<"\n";
    }
}
