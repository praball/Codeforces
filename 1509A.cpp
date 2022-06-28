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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int>v1,v2;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                v1.push_back(a[i]);
                //cout<<a[i]<<" ";
            }
            else
            {
                v2.push_back(a[i]);
                //cout<<a[i]<<" ";    
            }
        }
        //print(v1);
        //cout<<v2.size()<<" ";
        while(true)
        {
        	if(v1.empty()==true)
        	{
        		break;
			}
			else
			{
				cout<<v1.back()<<" ";
            	v1.pop_back();
            }
        }
        while(true)
        {
        	if(v2.empty()==true)
        	{
        		break;
			}
			else
			{
				cout<<v2.back()<<" ";
            	v2.pop_back();
        	}
		}
        cout<<"\n";
    }
}
