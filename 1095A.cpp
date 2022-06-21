#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i=0, k=1;
    cin>>n;
    string s;
    cin>>s;
    while(i<n)
    {
        cout<<s[i];
        i = i+k;               //  i = 0  1  3  6
        k++;                   //  k = 1  2  3  4
    }
    cout<<"\n";
}
//                              1  3  6  10
