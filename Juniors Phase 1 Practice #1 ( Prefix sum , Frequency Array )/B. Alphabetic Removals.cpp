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
      ll n,k;
      cin>>n>>k;
      char x;
      string s;
      cin>>s;

      for(int i=0; i<=25 ; i++)
      {
          x=(char)(97+i);
          for(int j=0 ; j<n ;j++)
          {
              if(k==0)break;
              if(s[j]==x)
                {
                    s[j]='0';
                    k--;
                }

          }
      }

      for(int i=0 ; i<n ; i++)
      {
          if(s[i]!='0')
            cout<<s[i];
      }

    return 0;
}