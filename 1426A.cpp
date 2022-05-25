#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        int a,b,count = 1;
        cin>>a>>b;
        if(a==1 ||a==2)
        {
            cout<<"1\n";
        }
        else
        {
            int c = a-2;
            do
            {
                c=c-b;
                count++;
            }while(c>0);
            cout<<count<<endl;
        }
    }
}
