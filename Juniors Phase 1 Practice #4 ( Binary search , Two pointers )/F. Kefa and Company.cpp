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

    ll n,d; cin>>n>>d;
    map<pair<ll,ll>,ll>mp;
    vector<pair<ll,ll>>v;
    rep(i,n){
    ll x,y; cin>>x>>y;
    v.push_back({x,i});
    mp[{x,i}]=y;
    }
    sort(all(v));
    ll ans=0,sum=0;
    int l=0,r=0;
    while(l<n){
        while(r<n && v[r].first-v[l].first<d){
            ll x=v[r].first,y=v[r].second;
            sum+=mp[{x,y}];
            r++;
        }
        ans=max(ans,sum);
        ll x=v[l].first,y=v[l].second;
        sum-=mp[{x,y}];
        l++;

    }
    cout<<ans;



    return 0;

}