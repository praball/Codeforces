#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        string s;
        cin>>s;
        int cnt[26];
        memset(cnt, 0, sizeof(cnt));
        for(auto c : s) cnt[c - 'a']++;
        int cnt1 = 0;
        int cnt2 = 0;
        for(auto i : cnt)
        {
          if(i == 1)
          {
            cnt1++;
          }
          else if(i > 1)
          {
            cnt2++;
          }
    }
    cout<<(cnt2 + cnt1/2)<<endl;
    }
}
