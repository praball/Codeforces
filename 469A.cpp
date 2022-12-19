#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b;
    cin>>n>>a;
    set<int>s;
    for(int i=0;i<a;i++)
    {
    	int x;
    	cin>>x;
    	s.insert(x);
	}
	cin>>b;
	for(int i=0;i<b;i++)
	{
		int x;
		cin>>x;
		s.insert(x);
	}
	if(s.size() == n)
	{
		cout<<"I become the guy.\n";
	}
	else
	{
		cout<<"Oh, my keyboard!\n";
	}
}
