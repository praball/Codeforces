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
    	string s;
    	cin>>s;
    	int a = (int)s[0];
    	int b = (int)s[2];
    	int c = a+b;
    	c=c-48-48;
    	cout<<c<<"\n";
    }
}
