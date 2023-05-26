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
    ll n,q; cin>>n>>q;
    ll mx=0;
    deque<ll>dq(n); rep(i,n){
        cin>>dq[i];
        mx=max(mx,dq[i]);
        }
    deque<ll>temp(n);
     ll a,b,z,y;
     ll cnt=0;
     bool flag=0;
    rep(i,n)temp[i]=dq[i];
     vector<pair<ll,ll>>v;
    for(int i=0 ; i<n ; i++){
        z=temp[0],y=temp[1];
        a=max(temp[1],temp[0]),b=min(temp[1],temp[0]);
        if(z==mx){
                flag=1;
                break;
        }
        cnt++;
        v.push_back({z,y});
        temp.pop_front();
        temp.pop_front();
        temp.push_back(b);
        temp.push_front(a);
    }
    while(q--){
        ll x; cin>>x;
        if(x>cnt){
            ll c=x-cnt;
            c%=n-1;
            if(c==0)c=n-1;
            cout<<mx<<" "<<temp[c]<<endl;
        }else cout<<v[x-1].first<<" "<<v[x-1].second<<endl;
    }

    return 0;
}