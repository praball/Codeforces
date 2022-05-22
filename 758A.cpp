#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    int max = *max_element(arr, arr + n);
    int count = 0;
    for(int i = 0; i<n ; i++)
    {
        int diff = max - arr[i];
        count = count + diff;
    }
    cout<<count;
}
