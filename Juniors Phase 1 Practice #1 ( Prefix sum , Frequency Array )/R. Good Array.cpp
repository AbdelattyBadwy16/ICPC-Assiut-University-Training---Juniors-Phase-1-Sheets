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
    ll n; cin>>n;
    ll arr[n],sum=0;
    ll flag[n];
    rep(i,n){
    cin>>arr[i];
    flag[i]=arr[i];
    sum+=arr[i];
    }
    sort(flag,flag+n);
    ll mx1=flag[n-1];
    ll mx2=flag[n-2];
    vector<ll>v;
   // cout<<mx1<<" "<<mx2<<endl;
   // cout<<sum<<endl;
    rep(i,n){
       // cout<<arr[i]<<" "<<mx1<<endl;
    if(arr[i]==mx1){
        if(sum-mx2-arr[i]==mx2){
            //    cout<<i<<" one"<<endl;
                v.push_back(i+1);
        }
    }else{
        if(sum-mx1-arr[i]==mx1){
               // cout<<i<<" two"<<endl;

                v.push_back(i+1);
        }
    }
    }
    cout<<v.sz<<endl;
    for(auto it:v)cout<<it<<" ";
    return 0;

}