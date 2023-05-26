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

  int n,maxx=INT_MIN;
  cin>>n;
  pair<int,int>pp[n];
  for(int i=0 ; i<n ; i++){
    cin>>pp[i].first>>pp[i].second;
    //maxx=max(maxx,ss[i].second);
  }

 sort(pp,pp+n);int c=0;
//or(int i=0 ; i<n ; i++)cout<<pp[i].first<<" "<<pp[i].second<<endl;
    for(int i=1 ; i<n ;i++)
    {
       // cout<<c<<endl;
         if(pp[i].first<=pp[c].second)
         {
            pp[c].second=max(pp[i].second,pp[c].second);
            pp[i].first=0;pp[i].second=0;

             continue;
            }
 c=i;
    }
for(int i=0 ; i<n ; i++)
{
    if(pp[i].first!=0)
        cout<<pp[i].first<<" "<<pp[i].second<<endl;
}
    return 0;
}