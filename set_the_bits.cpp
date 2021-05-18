#include<bits/stdc++.h>
using namespace std;
int main()
{
    //the position of given bit in num is unset so make it set
    int num,pos,a;
    cin>>num;
    cin>>pos;
    a=num^(1<<(pos-1));
    cout<<a;
}

