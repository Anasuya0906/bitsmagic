#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int count=0;
    cin>>num;
    while(num)
    {
        if(num&1)
        {
            count+=1;
        }
        num=num>>1;
    }
    cout<<count;

}