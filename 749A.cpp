#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int l = n/2;
    l = l-1;
    if(n==2)
    {
        cout<<"1\n"<<"2";
    }
    else if(n==3)
    {
        cout<<"1\n"<<"3";
    }
    else if(n%2==0)
    {
        cout<<n/2<<endl;
        for(int i = 0;i<n/2;i++)
        {
            cout<<"2 ";
        }
    }
    else
    {
        cout<<l+1<<endl;
        for(int i = 0;i<l;i++) // 5: l = 1      7: l = 2
        {
            cout<<"2 ";
        }
        cout<<"3";
    }
}
/*
5 = 2[1]
7 = 2[2]
9 =  2[3]
11 = 2[4]

*/
