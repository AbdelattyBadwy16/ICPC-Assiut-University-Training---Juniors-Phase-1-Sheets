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
#define sumOf(a) (ll)((-1 + sqrt(8 * a + 1)) / 2)
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define input freopen("stand.in","r",stdin);
#define output freopen("stand.out","w",stdout);
#define Glitch ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define dirx int dx[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
//#define diry int dy[8] = { 0, 1, 0, -1, -1, 1, 1, -1 };
using namespace std;


void solve()
{
    int n; cin>>n;
    int arr[n]; rep(i,n)cin>>arr[i];
    int min_dist=INT_MAX,mx=INT_MIN,mn=INT_MAX;
    rep(i,n)
    {
        mx=max(arr[i],mx);
        mn=min(arr[i],mn);
    }
    vector<int>v;
    vector<int>vv;
    rep(i,n)
    {
        if(arr[i]==mx)v.push_back(i);
        else if(arr[i]==mn)vv.push_back(i);
    }
    if(vv.sz==0)
    {
        cout<<0;
        return;
    }
    sort(all(v));
    sort(all(vv));
    for(auto it:v)
    {
        int l=0,r=vv.sz-1;
        int x=lower_bound(vv.begin(),vv.end(),it)-vv.begin();
      //  cout<<vv[x]<<" "<<it<<endl;
        if(x!=vv.sz)min_dist=min(abs(it-vv[x]),min_dist);
    }
    for(auto it:vv)
    {
        int l=0,r=v.sz-1;
        int x=lower_bound(v.begin(),v.end(),it)-v.begin();
       // cout<<v[x]<<" "<<it<<endl;
        if(x!=v.sz)min_dist=min(abs(it-v[x]),min_dist);
    }

    cout<<min_dist;
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