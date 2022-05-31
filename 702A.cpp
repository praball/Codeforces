/*
This code doesnt work for long values of n and hence didnt work on codeforces problem 702A.
Dynamic programming is a better way of solving the longest increasing subsequence problem.
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

/*
Q. You are given array consisting of n integers.
   Your task is to find the maximum length of an increasing subarray of the given array.
   A subarray is the sequence of consecutive elements of the array.
   Subarray is called increasing if each element of this subarray strictly greater than previous.
*/

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i = 0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    vector<ll>arr;
    for(ll i = 0 ; i<n-1 ; i++)
    {
        ll max = 1;
        ll j = i+1;
        while(a[j]>a[j-1] && j<n)
        {				
            max++;
            j++;
            //cout<<a[j]<<" "<<j<<" "<<max<<" \n";
        }
        //cout<<max<<endl;
        arr.push_back(max);
    }
//    for (int i = 0; i < arr.size(); i++) 
//	{
//    	cout << arr[i] <<" ";
//    }
    
    int max = *max_element(arr.begin(), arr.end());
    cout<<endl<<max;
}
