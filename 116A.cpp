#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	int cap = 0;
	int inside = 0;
	for(int i = 0 ; i<n ; i++)
	{
		int a,b;
	 	cin>>a>>b;
		inside = inside-a;
		inside = inside+b;
		cap = max(cap, inside);
	}
	cout<<cap;
}
