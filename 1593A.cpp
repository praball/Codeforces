#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j = 0;j<t;j++)
    {
        int a,b,c;
        cin>>a>>b>>c;
    	cout << max(0, max(b, c) + 1 - a) <<" ";
	    cout << max(0, max(a, c) + 1 - b) <<" ";
	    cout << max(0, max(a, b) + 1 - c) <<" ";
    }
}

/*

5
0 0 0
10 75 15
13 13 17
1000 0 0
0 1000000000 0

1 1 1
66 0 61
5 5 0
0 1001 1001
1000000001 0 1000000001


*/
