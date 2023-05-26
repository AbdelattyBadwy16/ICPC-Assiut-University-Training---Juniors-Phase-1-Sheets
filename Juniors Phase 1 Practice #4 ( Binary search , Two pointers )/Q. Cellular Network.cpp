#include <bits/stdc++.h>
#include <string.h>
#define ll long long
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
#define Glitch ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define oo 1e19
//#define dirx int dx[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
//#define diry int dy[8] = { 0, 1, 0, -1, -1, 1, 1, -1 };
using namespace std;



void solve()
{
  int n,m; cin>>n>>m;
  int city[n]; rep(i,n)cin>>city[i];
  int tower[m]; rep(i,m)cin>>tower[i];
  sort(city,city+n);
  sort(tower,tower+m);
  ll cnt;
  ll ans=-oo;
  rep(i,n)
  {
      int x=lower_bound(tower,tower+m,city[i])-tower;
      if(x==m)x--;
      if(x==0)cnt=abs(tower[x]-city[i]);
      else cnt=min(abs(tower[x]-city[i]),abs(tower[x-1]-city[i]));
      //cout<<cnt<<" "<<x<<endl;
      ans=max(ans,cnt);
  }
  cout<<ans;
}


int main()
{

    Glitch;
    int t=1;
    //cin>>t;
    while(t--)
        solve();

    return 0;
}
 