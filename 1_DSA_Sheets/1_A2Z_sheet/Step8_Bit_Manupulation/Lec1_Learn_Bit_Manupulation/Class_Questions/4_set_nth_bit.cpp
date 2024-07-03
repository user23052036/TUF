#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num=45,i=1;

    num = num | (1<<i);

    cout<<"after setting "<<i<<" bit we have ->"<<num<<"\n";
    return 0;
}