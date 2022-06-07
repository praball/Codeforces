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
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(n > 2 || s == "11" || s == "00") 
		{
            cout << "NO\n";
        } 
		else 
		{
            cout << "YES\n";
        }
    }
}
