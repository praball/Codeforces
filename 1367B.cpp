#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        int a;
        cin>>a;
        int arr[a];
        for(int j = 0;j<a;j++)
        {
            cin>>arr[j];
        }
        int co = 0, ce = 0, flag = 0;
        for(int j = 0;j<a;j++)
        {
            if(arr[j]%2==0)
            {
                ce++;
            }
            else
            {
                co++;
            }
        }
        //cout<<ce<<endl<<co<<endl;
        int x=a/2;
        if(a%2==0)
        {
            if(ce==x && co==x)
            {
                
            }
            else
            {
                flag = 1;
            }
        }
        else
        {
            if(ce == x+1 && co == x)
            {
                
            }
            else
            {
                flag = 1;
            }
        }
        int inc = 0;
        for(int j = 0;j<a;j = j+2)
        {
            if(arr[j]%2!=0)
            {
                inc++;
            }
        }
        //cout<<flag;
        if(flag == 1)
        {
            cout<<"-1\n";
        }
        else
        {
            cout<<inc<<endl;
        }
    }
}
