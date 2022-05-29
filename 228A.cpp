#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;
    for(int i = 0; i < 4 ; i++)
    {
        int a;
        cin>>a;
        s.insert(a);
    }
    int res = 4 - s.size();
    cout<<res;
}
