#include <bits/stdc++.h>
#include <string.h>
#define ll long long
#define tc int t; cin >> t; while(t--)
#define endl "\n"
#define loop(a, b, c) for(int i = a ; i < (b); i += c)
#define all(vec) vec.begin(),vec.end()
#define mem(arr,value) memset(arr, value, sizeof(arr))
#define rall(vec) vec.rbegin(),vec.rend()
#define sz size()
#define Pair pair <int,int>
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod  1000'000'007
#define INF 2000'000'000
#define pi 3.141592
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define input freopen("stand.in","r",stdin);
#define output freopen("stand.out","w",stdout);
#define Glitch ios_base::sync_with_stdio(false);cin.tie(0);
//#define dirx int dx[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
//#define diry int dy[8] = { 0, 1, 0, -1, -1, 1, 1, -1 };
using namespace std;

int main()
{


    Glitch;
    ll n,x; cin>>n>>x;
    ll sum=0;
    bool vaild[100000+5]={0};
    ll arr[n];rep(i,n){
        cin>>arr[i];
    }
    ll l=0,r=0,len=0;
    while(l<n){
     while(r<n && sum<=x){
        sum+=arr[r];
        r++;
        len++;
     }
    // cout<<len<<" "<<sum<<endl;
     if(sum>x)
     vaild[len]=1;
     sum-=arr[l];
     l++;
     len--;
    }
    ll k=0;
    rep(i,n){
      //  cout<<vaild[i]<<" "<<endl;
      if(!vaild[i+1])k++;
      else break;
    }
    if(k==0)cout<<-1<<endl;
    else cout<<k<<endl;

    return 0;
}