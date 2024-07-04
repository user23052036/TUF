
//every element in the array occures 3 times expect 1 element 
// which occures once find it 

/*
result | (1 << bitIndx): This expression performs a bitwise OR operation 
between result and 1 left-shifted by bitIndx bits, but it does not change the 
value of result. It merely evaluates to the result of the OR operation.

result = result | (1 << bitIndx);: This statement also performs a bitwise OR 
operation between result and 1 left-shifted by bitIndx bits, but it additionally 
assigns the result of this operation back to result. This effectively sets the 
bitIndx bit of result to 1.
*/

#include<bits/stdc++.h>
using namespace std;

int solution_1(int *arr, int size)
{
    int result=0;
    for(int bitIndx=0; bitIndx<32; bitIndx++)
    {
        int cnt=0;
        for(int i=0; i<size; i++)
        {
            if(arr[i] & (1<<bitIndx))  // if bit set
                cnt++;
        }
        if(cnt%3 == 1)
            result = result | (1<<bitIndx);
    }
    return result;
}

int solution_2(int *arr, int size)
{
    sort(arr, arr+size);
    for(int i=1; i<size; i++)
    {
        if(arr[i] != arr[i-1])
            return arr[i-1];
    }
    return arr[size-1];
}


int main()
{
    int arr[]={5,2,4,4,5,5,4};

    cout<<solution_1(arr,7)<<"\n";
    cout<<solution_2(arr,7)<<"\n";
    return 0;
}