#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    map<int,int>m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        m[x]++;
    }
    int max = 0;
    for(int i=1;i<101;i++)
    {
        if(m[i]>max)
        {
            max = m[i];
        }
    }
    cout<<max<<"\n";
}
