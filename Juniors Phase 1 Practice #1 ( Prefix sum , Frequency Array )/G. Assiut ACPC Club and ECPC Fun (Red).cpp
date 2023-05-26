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

    int n,c=0;
    cin>>n;
    int arr[n];
    for(int i=0 ; i <n ; i++)cin>>arr[i];



    int m;
    cin>>m;
    int l,r;
    vector<int>sum(n,0);
    vector<int>pp(n,0);
    for(int i=0 ; i<m ; i++)
    {
        cin>>l>>r;

        pp[l-1]--;
        if(r==n)
        {
            pp[r-1]=-1;
        }else
        pp[r]++;
    }
  //for(int i=0 ; i<n ; i++)cout<<pp[i]<<" ";

  int x=0;
  for(int i=0 ; i<n ;i++)
  {
      x+=pp[i];
      sum[i]=x;
      if(sum[i]==0)
        c++;
  }
  cout<<c<<endl;
  for(int i=0 ; i<n ; i++)
  {
      if(sum[i]==0)cout<<arr[i]<<" ";
  }

    return 0;
}