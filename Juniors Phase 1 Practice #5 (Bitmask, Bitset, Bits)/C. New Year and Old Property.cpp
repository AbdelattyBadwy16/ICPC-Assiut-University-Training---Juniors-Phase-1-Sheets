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

ll getdigit(ll n){
ll sum=0;
while(n!=0){
    sum++;
    n/=2;
}
return sum;
}


int main()
{


    Glitch;
    ll a,b;  cin>>a>>b;
    ll mx=max(getdigit(b),getdigit(a));
    ll mn=min(getdigit(b),getdigit(a));
    bitset<64>s(0);
    set<ll>ss;
    ll ans=0;
    for(int i=mn ; i<=mx ; i++){
    bitset<64>s(0);
    rep(j,i)s[j]=1;
    rep(j,i-1){
    s[j]=0;
    //cout<<s<<endl;
    ll temp=s.to_ullong();
    //cout<<temp<<" i "<<s<<endl;
    if(temp<=b && temp>=a&& ss.count(temp)==0){ans++;ss.insert(temp);}
    s[j]=1;
    }
   // for(auto it:ss)cout<<it<<endl;
    }
    cout<<ans;
    return 0;
}