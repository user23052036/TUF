#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num1=56,num2=33;

    num1 = num1^num2;
    num2 = num1^num2;
    num1 = num1^num2;

    cout<<num1<<"  "<<num2<<"\n";
    return 0;
}