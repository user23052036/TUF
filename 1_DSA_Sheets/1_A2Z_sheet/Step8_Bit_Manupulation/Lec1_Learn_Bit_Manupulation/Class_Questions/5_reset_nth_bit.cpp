#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num=45,i=3;

    num = num & ~(1<<i);

    cout<<"after reseting "<<i<<"th bit we have ->"<<num<<"\n";
    return 0;
}