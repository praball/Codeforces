#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int l = max(a,b);
    int ans = 7-l;
    if(ans == 1)
    {
        cout<<"1/6";
    }
    else if(ans == 2)
    {
        cout<<"1/3";
    }
    else if(ans == 3)
    {
        cout<<"1/2";
    }
    else if(ans == 4)
    {
        cout<<"2/3";
    }
    else if(ans == 5)
    {
        cout<<"5/6";
    }
    else if(ans == 6)
    {
        cout<<"1/1";
    }
}
