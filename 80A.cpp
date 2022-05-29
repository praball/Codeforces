#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if (n <= 1)
        return false;
 
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int c = a, flag = 0;
    do
    {
        c++;
    }while(isprime(c)!=true);
    if(b==c)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
