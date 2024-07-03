#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num=45,i=2;

    if(num & (1<<i) != 0) cout<<"set\n";
    else cout<<"not set\n";
    return 0;
}