#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int l=0;l<t;l++)
    {
        int n;
        cin>>n;
		vector<int> cnt(n + 1), idx(n + 1);
		for (int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			++cnt[x];
			idx[x] = i + 1;
		}
		int ans = -1;
		for (int i = 0; i <= n; ++i) {
			if (cnt[i] == 1) {
				ans = idx[i];
				break;
			}
		}
		cout << ans << endl;
    }
}
