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
        int n;
        cin>>n;
        set<int>s;
        for(int i=1;i*i<=n;i++)
        {
        	s.insert(i*i);
		}
		for(int i=1;i*i*i<=n;i++)
		{
			s.insert(i*i*i);
		}
		cout<<s.size()<<"\n";
    }
}
