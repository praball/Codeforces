#include<bits/stdc++.h>
using namespace std;

/*
bool isPerfectSquare(long long x)
{
    if (x >= 0) {
 
        long long sr = sqrt(x);
         
        return (sr * sr == x);
    }

    return false;
}

bool perfectCube(long long N)
{
    long long cube_root;
    cube_root = round(cbrt(N));
 
    if (cube_root * cube_root * cube_root == N)
	{
        return true;
    }
    else
	{
        return false;
    }
}
 

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		long long n, count = 0;
		cin>>n;
		for(long long i=1;i<=n;i++)
		{
			if(isPerfectSquare(i)==true || perfectCube(i)==true)
			{
				count++;
			}
		}
		cout<<count<<"\n";
	}
}
*/

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		int n;
		cin >> n;
		set<int> likes;
		for (int i = 1; (i * i) <= n; ++i) 
		{
			likes.insert(i * i);
		}
		for (int i = 1; (i * i * i) <= n; ++i) 
		{
			likes.insert(i * i * i);
		}
		cout << likes.size()<<"\n";
	}
}
