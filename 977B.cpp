#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int maxS = 0;
    string gram = "";
    map<string, int> m;
    int n;
    string s;
    cin>>n>>s;
    for(int i=0;i<n-1;i++) 
	{
        string cur = "";
        cur += s[i];
        cur += s[i+1];
        m[cur]++;
        if(m[cur]>maxS) 
		{
            maxS = m[cur];
            gram = cur;
        }
    }
    cout<<gram;
    return 0;
}
