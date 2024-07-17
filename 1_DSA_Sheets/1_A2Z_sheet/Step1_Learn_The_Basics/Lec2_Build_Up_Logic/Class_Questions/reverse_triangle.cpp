#include<bits/stdc++.h>
using namespace std;


void solve(int row)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<=2*(row-1); j++)
        {
            if(j>=i && j<=2*(row-1)-i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

int main() 
{
  cout<<"How many rows:-->";
  int tt; cin >> tt; 
  solve(tt);
  return 0;
}