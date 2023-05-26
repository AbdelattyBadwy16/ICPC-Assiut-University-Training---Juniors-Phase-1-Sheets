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
   ll n,temp=0,c=0,x;
   cin>>n;
   int freq[n+1]={0};
   n*=2;
   for(int i=0 ; i<n ; i++)
   {
       cin>>x;
       freq[x]++;
       if(freq[x]==1)
       {
           temp++;
       }else if(freq[x]==2)
       {
           temp--;
       }
       c=max(temp,c);
   }
   cout<<c;
    return 0;
}