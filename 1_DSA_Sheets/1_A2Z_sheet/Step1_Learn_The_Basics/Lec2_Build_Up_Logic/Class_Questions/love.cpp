#include<bits/stdc++.h>
using namespace std;

void upar(int);
void beech(int);
void neeche(int);
int main()
{
    cout<<"Kitna Bada Chahiye Tuje:-->";
    int tit;cin>>tit;
    upar(tit);
    beech(tit);
    neeche(tit);
    return 0;
}

void upar(int row)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<=4*(row-1); j++)
        {
            if((j>=row-1-i && j<=row-1+i) || (j>=3*(row-1)-i && j<=3*(row-1)+i))
                cout<<"*";
            else
                cout<<"   ";
        }
        cout<<"\n";
    }
}

void beech(int row)
{
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<=4*(row-1); j++)
            cout<<"*";
        cout<<"\n";
    }
}

void neeche(int row)
{
    for(int i=0; i<2*(row-1)+1; i++)
    {
        for(int j=0; j<=4*(row-1); j++)
        {
            if(j>=i && j<=4*(row-1)-i)
                cout<<"*";
            else
                cout<<"   ";
        }
        cout<<"\n";
    }    
}