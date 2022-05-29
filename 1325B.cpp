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
        set<int>s;
        for(int j = 0; j<a;j++)
        {
            int b;
            cin>>b;
            s.insert(b);
        }
        cout<<s.size()<<endl;
    }
}
