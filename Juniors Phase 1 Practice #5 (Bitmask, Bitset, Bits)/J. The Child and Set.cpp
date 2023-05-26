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
#define Glitch ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define dirx int dx[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
//#define diry int dy[8] = { 0, 1, 0, -1, -1, 1, 1, -1 };
using namespace std;

int firstone(ll n)
{
    string s="";
    while(n!=0)
    {
        if(n%2==0)s+='0';
        else s+='1';
        n/=2;
    }
    rep(i,s.sz)
    {
        if(s[i]=='1')return i;
    }
    return -1;
}


int main()
{
    Glitch;
    int s,l; cin>>s>>l;
    set<int>ans;
    bitset<64>num(s);
    ll sum=0;
    for(int j=l ; j>=1 ; j--)
    {
        int x=firstone(j);
        if(pow(2,x)+sum<=s)
        {
            sum+=pow(2,x);
            ans.insert(j);
        }
    }

    if(sum==s)
    {
        cout<<ans.sz<<endl;
        for(auto it:ans)cout<<it<<" ";
    }else cout<<-1;
    return 0;
}