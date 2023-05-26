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


    ll n,k,m; cin>>n>>k>>m;
    map<string,int>mp;
    vector<string>v(n);
    rep(i,n)cin>>v[i];
    rep(i,n){
        ll x; cin>>x;
        mp[v[i]]=x;
    }
    //for(auto it:mp)cout<<it.first<<" "<<it.second<<endl;
    while(k--){
        ll n; cin>>n;
        vector<int>c;
        int mn=INT_MAX;
        rep(i,n){
           ll x; cin>>x;
           mn=min(mn,mp[v[x-1]]);
           c.push_back(x);
        }

        rep(i,n){
           mp[v[c[i]-1]]=mn;
        }
    }
    ll ans=0;
    rep(i,m){
       string s; cin>>s;
       ans+=mp[s];
    }
    cout<<ans;

    return 0;
}