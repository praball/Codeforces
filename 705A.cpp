#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin>>n;
    string a,b,c,d;
    a = "I hate ";
    b = "I love ";
    c = "that ";
    d = "it";
    int count = 0;
    cout<<a;
    if(n==1)
    {}
    else
    {
        for(int i = 1; i<n ; i++)
        {
            if(count==0)
            {
                cout<<c<<b;
                count++;
            }
            else
            {
                cout<<c<<a;
                count--;
            }
        }
    }
    cout<<d;
}
