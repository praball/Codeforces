#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int n = a*b;
    int flag = 0;
    for(int i = 0;i<n;i++)
    {
        char s;
		cin>>s;
		s=int(s);
		
        //cout<<flag<<endl;
        if(s==66)
        {
        	
        }
        else if(s==87)
        {
        	
		}
		else if(s==71)
        {
        	
		}
        else
        {
            flag = 1;
        }
        
    }
    
    if(flag == 0)
    {
        cout<<"#Black&White"<<endl;
    }
    else
    {
        cout<<"#Color"<<endl;
    }
}
