#include<bits/stdc++.h>
using namespace std;

void triangle(int);
void rev_triangle(int);

int main() 
{
  cout<<"How many rows:-->";
  int tt; cin >> tt; 
  triangle(tt);
  rev_triangle(tt);
  return 0;
}

void triangle(int row)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<=2*(row-1); j++)
        {
            if(j>=(row-1)-i && j<=(row-1)+i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}

void rev_triangle(int row)
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