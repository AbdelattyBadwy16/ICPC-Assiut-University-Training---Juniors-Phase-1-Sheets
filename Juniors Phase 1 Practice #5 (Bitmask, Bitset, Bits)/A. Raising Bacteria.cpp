/**
 *    author: Abdelatty Badwy
 *    Handel: Glitch00
 *    I hope to get accept after these attempts
**/
#include <bits/stdc++.h>
#include <string.h>
#define ll long long
#define tc int t; cin >> t; while(t--)
#define endl "\n"
#define loop(a, b, c) for(int i = a ; i < (b); i += c)
#define all(vec) vec.begin(),vec.end()
#define rall(vec) vec.rbegin(),vec.rend()
#define sz size()
#define Pair pair <int,int>
#define ll long long
#define ull unsigned long long
#define mod  1000'000'007
#define INF 2000'000'000
#define pi 3.14159
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define input freopen("stand.in","r",stdin);
#define output freopen("stand.out","w",stdout);
#define ON(n,k) ((n)|(1<<(k)))
#define OFF(n,k) ((n)& ~(1<<(k)))
#define ISON(n,k) (((n)>>(k))& 1)

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
ll n;
cin>>n;
bitset<32>x(n);
ll cnt=0;
rep(i,32)if(x[i]==1)cnt++;
cout<<cnt;
return 0;
}