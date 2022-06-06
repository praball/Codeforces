#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n;
        cin>>n;
        int a[n];
		float sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum = sum + a[i];
        }
        float mean = sum/n;
        //cout<<mean<<" ";
        if(mean==1)
        {
            cout<<"0\n";
        }
        else if(mean>1)
        {
            int res = sum - n;
            cout<<res<<"\n";
        }
        else
        {
            cout<<"1\n";
        }
    }
}	
