/*


  ▄████  ██▓     ██▓▄▄▄█████▓ ▄████▄   ██░ ██
 ██▒ ▀█▒▓██▒    ▓██▒▓  ██▒ ▓▒▒██▀ ▀█  ▓██░ ██▒
▒██░▄▄▄░▒██░    ▒██▒▒ ▓██░ ▒░▒▓█    ▄ ▒██▀▀██░
░▓█  ██▓▒██░    ░██░░ ▓██▓ ░ ▒▓▓▄ ▄██▒░▓█ ░██
░▒▓███▀▒░██████▒░██░  ▒██▒ ░ ▒ ▓███▀ ░░▓█▒░██▓
 ░▒   ▒ ░ ▒░▓  ░░▓    ▒ ░░   ░ ░▒ ▒  ░ ▒ ░░▒░▒
  ░   ░ ░ ░ ▒  ░ ▒ ░    ░      ░  ▒    ▒ ░▒░ ░
░ ░   ░   ░ ░    ▒ ░  ░      ░         ░  ░░ ░
      ░     ░  ░ ░           ░ ░       ░  ░  ░

*/
#include <bits/stdc++.h>
#include <string.h>
#define ll long long
#define tc int t; cin >> t; while(t--)
#define endl "\n"
#define loop(a, b, c) for(int i = a ; i < (b); i += c)
#define all(vec) vec.begin(),vec.end()
#define rall(vec) vec.rbegin(),vec.rend()
#define sz size()
#define Pair pair <int,int>
#define ll long long
#define ull unsigned long long
#define mod  1000'000'007
#define INF 2000'000'000
#define pi 3.14159
#define rep(i,n) for(int i=0;i<(int)n;i++)
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
   ll n,q,r,l,mid,k,in;
   cin>>n>>q;
  ll arr[n];
   rep(i,n)cin>>arr[i];
   sort(arr,arr+n);
   while(q--){
   l=0,r=n-1,in=-1;
   cin>>k;
   while(l<=r)
   {
       mid=(l+r)/2;
       //cout<<"baaa"<<arr[mid]<<" "<<k<<endl;
       if(arr[mid]==k)
       {
           in=mid;
           break;
       }
       if(arr[mid]<k)
       {
           l=mid+1;
       }else r=mid-1;
   }
   //cout<<in<<" afa"<<endl;
  if(in==-1)
  {
      if(k>=arr[n-1])cout<<-1<<endl;
      else if(k<arr[0])cout<<arr[0]<<endl;
      else cout<<arr[l]<<endl;
  }else{

  if(in==n-1)cout<<-1<<endl;
  else cout<<arr[in+1]<<endl;
  }
   }

return 0;
}
 