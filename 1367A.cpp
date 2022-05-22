#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 0; i<n ; i++)
    {
        string a;
        cin>>a;
        int l = a.length();
        cout<<a[0];
        for(int j = 1; j<l ; j++)
        {
            if(j%2 != 0)
            {
                cout<<a[j];
            }
        }
        cout<<endl;
    }
}
