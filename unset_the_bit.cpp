#include<bits/stdc++.h>
using namespace std;
int main()
{
    //the num in which the pos of the given bit is set make it unset
    int num,pos,a;
    cin>>num;
    cin>>pos;
    a=num^(1<<(pos-1));
    cout<<a;
}

