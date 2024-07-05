#include<bits/stdc++.h>
using namespace std;


int solution(int numinator, int dinominator)
{
    bool sign=true;
    int ans=0;

    if(numinator>=0 && dinominator<0) sign=false;
    if(numinator<=0 && dinominator>0) sign=false;

    numinator = abs(numinator);
    dinominator = abs(dinominator);

    if(numinator == dinominator) return 1;
    while(numinator>=dinominator)
    {
        int cnt=0;
        while(numinator >= (dinominator<<(cnt+1)))
            cnt++;
        
        numinator -= dinominator<<(cnt);
        ans += 1<<cnt;
    }

    if(sign==false) return (-1*ans);
    else return ans;
}

int main()
{
    int dinominator=3,numinator=22;

    cout<<solution(numinator,dinominator)<<"\n";
    return 0;
}