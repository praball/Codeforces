#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int flag = 0;
    for(int i = 1;i<10;i++)
    {
        int c = 0;
        c = a*i;
        if(c%10 == 0)
        {
        	cout<<i<<endl;
        	flag = 1;
        	break;
		}
        c = c - b;
        if(c%10 == 0)
        {
            cout<<i<<endl;
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        cout<<"10";
    }
}
