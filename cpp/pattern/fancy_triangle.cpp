#include<bits/stdc++.h>
using namespace std;


void solve(int row)
{
    for(int i=0; i<row; i++)
    {
        bool flag=true;
        for(int j=0; j<=2*row; j++)
        {
            if(j>=row-i && j<=row+i && flag==true)
            {
                cout<<"*";
                flag=false;
            }
            else
            {
                cout<<" ";
                flag=true;
            }
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