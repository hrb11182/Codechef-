#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n-15 >= 6)
/* (n-15) 15 is the sum of the total number of candies 1 to 5 will get 
(1+2+3+4+5) = 15 if total number of candies -15 is greaterthen or equal to 6 then
okk else not*/
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}