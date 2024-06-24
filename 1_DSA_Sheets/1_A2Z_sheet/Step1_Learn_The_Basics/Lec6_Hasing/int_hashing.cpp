#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int max=INT_MIN;
    int n,q;
    cin>>n>>q;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i] > max)
            max=arr[i];
    }

    int hash[max+1]={0};
    for(int i=0; i<n; i++)
        hash[arr[i]]++;

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