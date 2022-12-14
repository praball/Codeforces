#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int r = 1;
    while (r * 5 < n)
    {
        n -= r * 5;
        r *= 2;
    }

    string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    cout << names[(n - 1) / r] << endl;

    return 0;
}
// 1 2 3 4 5
// 6 8 10 12 14
// 16 20 24 28 32
// 36 44 52 60 68
// 74 90
