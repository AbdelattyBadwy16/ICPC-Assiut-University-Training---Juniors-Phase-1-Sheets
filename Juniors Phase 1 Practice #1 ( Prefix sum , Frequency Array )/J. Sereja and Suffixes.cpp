/*
    Abdelatty Badwy
        Glitch00
                     */
#include <bits/stdc++.h>
#define ll long long
#define tc int t; cin >> t; while(t--)
#define endl "\n"
#define dd int n; cin>>n; int arr[n]; for(int i=0 ; i<n ; i++)cin>>arr[i];
using namespace std;
void abdo()
{

     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    abdo();

set<int>s;
int n,m;
cin>>n>>m;int arr[n];
for(int i=0 ; i<n ; i++)cin>>arr[i];
int suf[n];
for(int i=n-1 ; i>=0 ;i--)
{
    s.insert(arr[i]);
    suf[i]=s.size();

}
int a;
  for(int i=0 ;i<m ; i++)
  {
      cin>>a;
      cout<<suf[a-1]<<endl;
  }
    return 0;
}