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
    int n,m,k; cin>>n>>m>>k;
    int arr[n]; rep(i,n)cin>>arr[i];
    pair<int,pair<int,int>>ope[m];
    rep(i,m){
    cin>>ope[i].first>>ope[i].second.first>>ope[i].second.second;
    }
    ll b[m]={0};
    rep(i,k){
    ll x,y; cin>>x>>y;
    b[x-1]++;
    if(y!=m)b[y]--;
    }
    for(int i=1 ; i<m ; i++)b[i]+=b[i-1];
    //rep(i,n)cout<<b[i]<<" ";
    ll temp[n]={0};
    rep(i,m){
    temp[ope[i].first-1]+=ope[i].second.second*b[i];
    if(ope[i].second.first!=n)
    temp[ope[i].second.first]-=ope[i].second.second*b[i];
    }
    for(int i=1 ; i<n  ; i++)temp[i]+=temp[i-1];
    rep(i,n)cout<<arr[i]+temp[i]<<" ";



    return 0;

}