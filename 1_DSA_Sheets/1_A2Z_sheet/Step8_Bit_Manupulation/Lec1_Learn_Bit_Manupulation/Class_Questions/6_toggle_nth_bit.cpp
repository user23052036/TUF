#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num=45,i=2;

    num = num ^ (1<<i);

    cout<<"after toggling "<<i<<"th bit we have ->"<<num<<"\n";
    return 0;
}