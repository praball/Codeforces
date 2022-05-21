#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int off=0, count=0;
    for(int i = 0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x>0)
        {
            off=off+x;
        }
        else
        {
            if(off>0)
            {
                off--;
            }
            else
            {
                count++;
            }
        }
    }
    cout<<count;
}
