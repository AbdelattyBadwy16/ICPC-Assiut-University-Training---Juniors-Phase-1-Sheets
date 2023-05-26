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
    ll n,m; cin>>n>>m;
    vector<pair<int,int>>v;
    vector<ll>ans;
    rep(i,n){
    ll x,y; cin>>x>>y;
    v.push_back({x,y});
    }
    sort(all(v));
    ll temp=0;
    rep(i,n-1){
    if(v[i+1].first<=v[temp].second){
        v[temp].second=max(v[i+1].second,v[temp].second);
        v[i+1].first=0;v[i+1].second=0;
    }else temp=i+1;
    }

    for(auto it:v)if(it.first!=0&&it.second!=0){
        ans.push_back(it.first);
        ans.push_back(it.second);
    }
   // for(auto it:ans)cout<<it<<" "<<endl;

    ll q; cin>>q;
    while(q--){
        ll x,y; cin>>x>>y;
        ll mx=max(x,y);
        ll mn=min(x,y);
        ll a=lower_bound(all(ans),mx)-ans.begin();
        ll b=lower_bound(all(ans),mn)-ans.begin();
      //  cout<<mx<<" "<<mn<<" "<<a<<" "<<b<<endl;
        if((a-b==1 && mn>=ans[b] && mx<=ans[a] ) ||(a-b==0 && a%2==1 ))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }






    return 0;

}