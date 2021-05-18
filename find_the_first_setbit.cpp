#include<bits/stdc++.h>
using namespace std;
int first_set_bit(int num)
{
    int pos=1;
    while(num)
    {
        if(num&1)
        {
           return pos;
        }
        num=num>>1;
        pos+=1;
    }
    return 0;

}
int main()
{
    int n;
    cin>>n;
    cout<<first_set_bit(n);
}