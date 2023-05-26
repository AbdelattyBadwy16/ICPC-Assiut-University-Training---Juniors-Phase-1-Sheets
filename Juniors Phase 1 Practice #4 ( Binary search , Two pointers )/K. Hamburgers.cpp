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
    string t; cin>>t;
    ll b=0,s=0,c=0;
    ll cb,cs,cc; cin>>cb>>cs>>cc;
    rep(i,t.sz)
    {
        if(t[i]=='B')b++;
        else if(t[i]=='S')s++;
        else c++;
    }
    ll n,pb,ps,pc; cin>>pb>>ps>>pc;
    cin>>n;
    ll l=1,r=1e15,md,ans=0;
    while(l<=r){
        md=(l+r)/2;
        ll tempb=0,temps=0,tempc=0;
        if((md*b)-cb>0)
        tempb=(md*b)-cb;
        if((md*s)-cs>0)
        temps=(md*s)-cs;
        if((md*c)-cc>0)
        tempc=(md*c)-cc;
        ll cost=(tempb*pb)+(temps*ps)+(tempc*pc);
        if(cost<=n){
            ans=max(ans,md);
            l=md+1;
        }else r=md-1;

    }
    cout<<ans;


    return 0;
}