#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	int arr[10][10];
	cin>>a;
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<a;j++)
		{
			if(i==0)
			{
				arr[i][j]=1;
			}
			else if(j==0)
			{
				arr[i][j]=1;
			}
			else
			{
				arr[i][j]=arr[i-1][j]+arr[i][j-1];	
			}
		}
	}
	cout<<arr[a-1][a-1];
}


/*
int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"1";
    }
    else if(n==2)
    {
        cout<<"2";
    }
    else if(n==3)
    {
        cout<<"6";
    }
    else if(n==4)
    {
        cout<<"20";
    }
    else if(n==5)
    {
        cout<<"70";
    }
    else if(n==6)
    {
        cout<<"252";
    }
    else if(n==7)
    {
        cout<<"924";
    }
    else if(n==8)
    {
        cout<<"3432";
    }
    else if(n==9)
    {
        cout<<"12870";
    }
    else if(n==10)
    {
        cout<<"48620";
    }
    
}
/*  1*
    1  2*             
    1  3  6*         
    1  4  10   20*     
    1  5  15   35   70*  
    1  6  21   56   126  252* 
	1  7  28   84   210  462  924*		
	1  8  36   120  330  792  1716	3432*
	1  9  45   165  495	 1287 3003  6435   12870*
	1  10 55   220  715  2002 5005  11440  24310   48620*
*/


