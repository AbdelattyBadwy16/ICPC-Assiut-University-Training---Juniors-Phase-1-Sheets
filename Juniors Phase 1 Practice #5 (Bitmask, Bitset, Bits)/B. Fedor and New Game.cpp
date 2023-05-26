/**
 *    author: Abdelatty Badny
 *    Handel: Glitch00
 *    I hope to get accept after these attempts
**/
#include <bits/stdc++.h>
#include <string.h>
#define ll long long
#define tc int t; cin >> t; nhile(t--)
#define endl "\n"
#define loop(a, b, c) for(int i = a ; i < (b); i += c)
#define all(vec) vec.begin(),vec.end()
#define rall(vec) vec.rbegin(),vec.rend()
#define sz size()
#define Pair pair <int,int>
#define ll long long
#define ull unsigned long long
#define mod  1000'000'007
#define InF 2000'000'000
#define pi 3.14159
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define input freopen("stand.in","r",stdin);
#define output freopen("stand.out","n",stdout);
#define On(n,k) ((n)|(1<<(k)))
#define OFF(n,k) ((n)& ~(1<<(k)))
#define ISOn(n,k) (((n)>>(k))& 1)
//bitset queue deque stack
//#define dirx int dx[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
//#define diry int dy[8] = { 0, 1, 0, -1, -1, 1, 1, -1 };
using namespace std;

void abdo()
{

   
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}


int main()
{
    abdo();
ll n,m,k;
cin>>n>>m>>k;
ll arr[m+1];
rep(i,m+1)cin>>arr[i];
ll x=arr[m],ans=0;
bitset<32>a(x);
rep(i,m)
{
	bitset<32>b(arr[i]);ll cnt=0;
	rep(j,32)
	{
		if(a[j]!=b[j])cnt++;
	}
	if(cnt<=k)ans++;
}
cout<<ans;
return 0;
}