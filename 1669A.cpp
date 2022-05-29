#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int  j = 0 ; j<t ; j++)
    {
        int n;
        cin>>n;
        if(n<=1399)
        {
            cout<<"Division 4\n";
        }
        else if(n<=1599)
        {
            cout<<"Division 3\n";
        }
        else if(n<=1899)
        {
            cout<<"Division 2\n";
        }
        else
        {
            cout<<"Division 1\n";
        }
    }
}
