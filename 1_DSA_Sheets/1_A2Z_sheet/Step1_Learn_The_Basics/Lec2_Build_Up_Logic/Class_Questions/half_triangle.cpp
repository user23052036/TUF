#include<bits/stdc++.h>
using namespace std;


void solve(int row)
{
    for(int i=0; i<row; i++)
    {
        int count=1;
        for(int j=0; j<=i; j++)
            cout<<count++;
        cout<<"\n";
    }
}

int main() 
{
  cout<<"How many times do you want to print the pattern:-->";
  int tt; cin >> tt; 
  solve(tt);
  return 0;
}