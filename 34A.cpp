#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,a[101],b[101];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int m = 1001, d = 0;
    d = abs(a[0] - a[n-1]);
    m = min(m,d);
    int idx1 = 1,idx2 = n;
    for(int i=0; i<n; i++){
        d = abs(a[i] - a[i+1]);
        if(m > d){
            m = d;
            idx1 = i+1;
            idx2 = i+2;
        }
    }
    cout<<idx1<<" "<<idx2<<endl;
	
}

/*

    
    int n;
    cin>>n;
    int a[n];
    for(int l=0;l<n;l++)
    {
        cin>>a[l];
    }
    int res = INT_MAX, flag = 0;
    for(int i=1;i<n;i++)
    {
    	int x = abs(a[i]-a[i-1]);
    	//cout<<x<<"\n";
    	int temp = min(res, x);
    	//cout<<x<<" "<<temp<<"\n";
    	if(temp == x)
    	{
    		flag = i;
		}
    	res = min(res, x);
	}
	int y = abs(a[0]-a[n-1]);
	int temp = min(res, y);
	if(temp == y)
	{
		flag = -1;
	}
	//cout<<flag<<"\n";
	res = min(res,y);
	if(flag == -1)
	{
		cout<<n<<" 1";	
	}
	else
	{
		cout<<flag-1<<" "<<flag;

*/
