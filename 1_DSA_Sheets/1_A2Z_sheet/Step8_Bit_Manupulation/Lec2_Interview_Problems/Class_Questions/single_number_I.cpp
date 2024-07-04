
//every element in the array occures twice expect 1 element find it 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={4,1,2,1,2},result=0;

    for(auto it:arr)
        result ^= it;                        //XOR of all the elements
    cout<<"The number is --->"<<result<<"\n";
    return 0;
}