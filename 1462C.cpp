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
		int x;
  		cin >> x;
  		vector<int> ans;
  		int sum = 0, last = 9;
  		while (sum < x && last > 0) 
		{
    		ans.push_back(min(x - sum, last));
    		sum += last;
    		last--;
  		}
  		if (sum < x) 
		{
    		cout << -1 << "\n";
  		} 
		else 
		{
    		reverse(ans.begin(), ans.end());
    		for (int i=0;i<ans.size();i++) 
			{
      			cout << ans[i];
    		}
    		cout << "\n";
  		}
	}   
}

// 1 2 3 4 5 6 7 8 9
// 12 = 3
// 98 = 17
