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
#define oo INT_MAX
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define input freopen("stand.in","r",stdin);
#define output freopen("stand.out","w",stdout);
#define Glitch ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define dirx int dx[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
//#define diry int dy[8] = { 0, 1, 0, -1, -1, 1, 1, -1 };
using namespace std;

void get_base64(vector<int>&v,string s)
{
    rep(i,s.sz)
    {
        if(s[i]>='0' && s[i]<='9')v.push_back(s[i]-'0');
        else if(s[i]>='A' && s[i]<='Z')v.push_back(s[i]-'A'+10);
        else if(s[i]>='a' && s[i]<='z')v.push_back(s[i]-'a'+36);
        else if(s[i]=='-')v.push_back(62);
        else if(s[i]=='_')v.push_back(63);
    }
}


void solve()
{
  string s; cin>>s;
  vector<int>v;
  get_base64(v,s);
  ll ans=1;
  rep(i,v.sz)
  {
      int x=v[i];
      rep(j,6)
      {
          if((x&(1<<j))==0)ans=(ans*3)%mod;
      }
  }
  cout<<ans;
}



int main()
{

    Glitch;
    //freopen("team.in","r",stdin);
    int t=1;
    //cin>>t;
    while(t--)
        solve();

    return 0;
}