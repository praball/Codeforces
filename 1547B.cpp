#include<bits./stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int flag = 2;
        deque<char> dq;
        char maxi = 'a';
        for(int i = 0;i<s.length();i++)
        {
            dq.push_back(s[i]);
            maxi = max(maxi,s[i]);
        }
        for(char ch = maxi; ch>='a' ; ch--)
        {
            if(dq.size() == 0)
            {
                flag = 1;
            }
            if(dq.front()==ch)
            {
                dq.pop_front();
            }
            else if(dq.back()==ch)
            {
                dq.pop_back();
            }
            else
            {
            	flag = 1;
            }
        }
        if(flag == 1)
        {
        	cout<<"NO\n";
		}
        else if(dq.size()==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}
