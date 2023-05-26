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
    int n,k; cin>>n>>k;
    double arr[n]; rep(i,n)cin>>arr[i];
    double l=0,r=1e5;
    sort(arr,arr+n);
    reverse(arr,arr+n);
    double ans=-1;
    while(l<=r && abs(r-l)>=0.000001)
    {
        double md=(l+r)/2;
        double increase=0,decrease=0;
        rep(i,n)
        {
            if(arr[i]>=md)
            {
                increase+=(arr[i]-md);
            }else
            {
                double temp=k-100;
                double x=md-arr[i];
                decrease+=((100*x)/(-1*temp));
            }
        }
        if(increase>=decrease)
        {
            ans=max(ans,md);
            l=md;
        }else r=md;
       // cout<<increase<<" "<<decrease<<" "<<l<<" "<<r<<" "<<md<<endl;
    }
    cout<<fixed<<setprecision(9)<<ans<<endl;
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