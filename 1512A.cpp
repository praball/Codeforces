#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        int a, count = 3, flag = 0;
        cin>>a;
        int arr[a];
        for(int j = 0;j<a;j++)
        {
            cin>>arr[j];
        }
        if(arr[0]!=arr[1] && arr[0]!=arr[2])
        {
            cout<<"1\n";
        }
        else if(arr[0]!=arr[1] && arr[0]==arr[2])
        {
            cout<<"2\n";
        }
        else
        {
            for(int j = 2; j<a;j++)
            {
                if(arr[0]==arr[j])
                {
                    count++;
                }
                else
                {
                	break;
                }
            }
            cout<<count<<endl;
		}
    }
}
