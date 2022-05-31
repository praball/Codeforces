#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int res = 0;
    for(int i = 0;i<n;i++)
    {
        res = res + min(10-abs(a[i]-b[i]),abs(a[i]-b[i]));
    }
    cout<<res;
}

// 1->2->3->4->5:        4
// 1->0->9->8->7->6->5:  6
