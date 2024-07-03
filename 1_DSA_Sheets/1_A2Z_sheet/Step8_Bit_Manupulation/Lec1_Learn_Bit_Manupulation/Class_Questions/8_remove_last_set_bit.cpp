#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num=146;

    num = num & (num-1);

    cout<<"after removing last set bit we have -->"<<num<<"\n";
    return 0;
}