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

    int n; cin>>n;
    ll arr[n];
    rep(i,n)cin>>arr[i];
    stack<int>s;
    s.push(n-1);
    vector<int>v(n,-1);
    for(int i=n-2 ; i>=0 ; i--){
     while(!s.empty() && arr[i]>=arr[s.top()])s.pop();
     if(!s.empty())v[i]=s.top()+1; s.push(i);
    }
    int q; cin>>q;
    while(q--){
        int x; cin>>x;
        cout<<v[x-1]<<endl;
    }

    return 0;

}