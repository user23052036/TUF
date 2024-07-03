#include<bits/stdc++.h>
using namespace std;


void solve(int row)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<=2*row; j++)
        {
            if(j>=row-i && j<=row+i)
                cout<<"*";
            else
                cout<<" ";
        }
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