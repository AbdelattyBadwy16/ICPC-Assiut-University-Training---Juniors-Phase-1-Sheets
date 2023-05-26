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
    ll n,k; cin>>n>>k;
    ll a[n],b[n];
    rep(i,n)cin>>a[i];
    rep(i,n)cin>>b[i];
    ll l=1,r=1e9,md,ans=0;
    while(l<=r){
        md=(l+r)/2;
        ll temp=0;
        ll cost=0;
        rep(i,n){
        if((a[i]*md)-b[i]>=0){
                temp+=(a[i]*md)-b[i];
                if(temp>1e9){
                    temp=1e10;
                    break;
                }
        }
         cost+=a[i];
        }
        if(temp==k){
            ans=max(ans,md);
            l=md+1;
        }else if(temp<k){
            ll x=k-temp;
            x/=cost;
          //  cout<<cost;
            ans=max(ans,md+x);
            l=md+1;
        }else r=md-1;
    }
    cout<<ans;
    return 0;
}