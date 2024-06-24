#include<bits/stdc++.h>
using namespace std;


void solve()
{
    string str;
    getline(cin,str);
    int q;
    cin>>q;
    int hash[256];

    for(int i=0; i<str.size(); i++)
        hash[str[i]]++;

    while(q--)
    {
        int x;
        cin>>x;
        cout<<hash[x]<<"\n";
    }
}

int main() 
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt; cin >> tt; 
  while(tt--){solve();}
  return 0;
}