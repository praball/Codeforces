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
        if(a%2==0)
        {
            cout<<a/2<<endl;
        }
        else
        {
            int k = a/2;
            cout<<k+1<<endl;
        }
    }
}
/*
1 = 1
2 = 1
3 = 2
4 = 2
5 = 3
6 = 3
7 = 4
8 = 4
9 = 5
10= 5
*/
