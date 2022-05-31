#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j = 0;j<t;j++)
    {
        int a,b;
        cin>>a>>b;
        if(a==0)
        {
            cout<<"1\n";
        }
        else if(b==0)
        {
            cout<<a+1<<endl;
        }
        else
        {
            int res = a + b*2 + 1;
            cout<<res<<endl;
        }
    }
}

//      a b
//      4 3: 11
//      3 3: 10
//      2 3: 9
//      1 3: 8
//      1 4: 9
//      1 5: 11
//      0 3: 1
//      3 0: 4
