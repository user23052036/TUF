#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num=326,cnt=0;

    while(num!=0)
    {
        num = num & (num-1);
        cnt++;
    }
    cout<<"number of set bits ---> "<<cnt<<"\n";
    return 0;
}