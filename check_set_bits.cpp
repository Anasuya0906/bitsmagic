#include<bits/stdc++.h>
using namespace std;
int check_bits(int num)
{
    while(num)
    {
        if(num&1)
        {
           num=num>>1;
        }
        else
        {
            return 0;
        }
    }
    return 1;

}
int main()
{
    int n;
    cin>>n;
    cout<<check_bits(n);
}