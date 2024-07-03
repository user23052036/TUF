#include<bits/stdc++.h>
using namespace std;

int main()
{
    int start,goal,count;

    cin>>start>>goal;

    unsigned int result = start ^ goal;
    count = __builtin_popcount(result);
    cout<<"Number of set bits are:--->"<<count<<"\n";
    return 0;
}