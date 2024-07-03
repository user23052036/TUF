#include<bits/stdc++.h>
using namespace std;

int binary_decimal(string binary)
{
    int length=binary.size(), res=0;
    int power = pow(2,0);

    for(int i=length-1; i>=0; i--)
    {
        if(binary[i] == '1')
            res += power;
        power *= 2;
    }
    return res;
}

int main()
{
    string binary;
    cout<<"Enter your binary number:-->";
    cin>>binary;

    cout<<"Decimal representation of "<<binary<<" is "<<binary_decimal(binary)<<"\n";
    return 0;
}