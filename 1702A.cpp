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
        if(n<10)
        {
        	cout<<n-1<<"\n";
		}
		else
		{
			int b = n, cnt = 0;
			while(b>0)
			{
				b=b/10;
				cnt++;
			}
			cnt--;
			cnt = pow(10, cnt);
			n = n-cnt;
			cout<<n<<"\n";
		}
    }
}
