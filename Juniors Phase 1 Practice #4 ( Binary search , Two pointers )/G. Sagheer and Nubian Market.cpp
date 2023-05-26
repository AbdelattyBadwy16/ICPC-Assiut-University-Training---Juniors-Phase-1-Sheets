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
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //#endif
    Glitch;
    ll n,s; cin>>n>>s;
    ll arr[n]; rep(i,n)cin>>arr[i];
   // sort(arr,arr+n);
    ll l=0,r=n,md;
    ll k=0,price=INT_MAX;
    while(l<=r)
    {
    md=(l+r)/2;
    ll sum=0;
    vector<ll>v;
    rep(i,n)v.push_back(arr[i]+md*(i+1));
    sort(all(v));
    rep(i,md)sum+=v[i];
    if(sum<=s){
        price=sum;
        k=md;
       // cout<<md<<endl;
        l=md+1;
    }else r=md-1;
    }
    cout<<k<<" "<<price<<endl;

    return 0;
}
 