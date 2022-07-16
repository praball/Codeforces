#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s)
{
    string rev = s;
	reverse(rev.begin(), rev.end());
    if(rev == s)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int l=0;l<t;l++)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(k==0)
        {
        	cout<<"1\n";
		}
        else if(palindrome(s) == true)
        {
            cout<<"1\n";
        }
        else
        {
            cout<<"2\n";
        }
    }
}
