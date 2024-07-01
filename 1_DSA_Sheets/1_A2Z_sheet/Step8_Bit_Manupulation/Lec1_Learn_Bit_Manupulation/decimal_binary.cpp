#include<bits/stdc++.h>
using namespace std;


string decimal_binary(int num)
{
    string str="";

    if(num == 0)
    {
        str += '0';
        return str;
    }
    else if(num == 1)
    {
        str += '1';
        return str;
    }
    else
    {
        while(num != 1)
        {
            if(num%2 == 0) str += '0';
            else str += '1';

            num = num/2;
        }
        reverse(str.begin(), str.end());
        return str;
    }

}

int main()
{
    int num;
    cout<<"Enter your number(only positive):--->";
    cin>>num;

    cout<<decimal_binary(num)<<"\n";
    return 0;
}