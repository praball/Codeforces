#include <bits/stdc++.h>
using namespace std;
typedef long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin>>s;
	char start='a';
	ll sum=0;
	for(int i=0;i<s.size();i++)
	{
   		ll l1=abs(s[i]- start);
   		ll l2=26-abs(l1);
   		sum+=min(l1,l2);
   		start=s[i];
	}
	cout<<sum<<endl;

}
