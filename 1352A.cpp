#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j = 0 ; j<t ; j++)
    {
        int n;
        cin>>n;
        int digits = 0, a = n, b = n;
        while(a>0)
        {
            a=a/10;
            digits++;
        }
        int count = 0, count1 = 0;
        vector<int> arr;
        while(b>0)
        {
            if(b%10 != 0)               // b = 765
            {
                int c = (b%10)*(pow(10,count));
                arr.push_back(c);
                count1++;
            }
            b = b/10;                   // b = 76
            count++;
        }
        cout<<count1<<endl;
        for(int  i = 0 ; i<count1 ; i++)
        {
            cout<<arr.back()<<" ";
            arr.pop_back();
        }
    }
}
