#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int count = 0;
    do
    {
        a=a*3;
        b=b*2;
        count++;
    }while(b>=a);
    cout<<count;
}
