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
int arr[200000+5];
bool check(string s,string t,int md){
  int j=0;
  rep(i,md+1)s[arr[i]]='.';
  rep(i,s.sz){
   if(j<t.sz && s[i]==t[j]){
    j++;
   }
  }
  //cout<<md<<" "<<s<<" "<<j<<endl;
  if(j==t.sz)return 1;
  else return 0;
}

int main()
{

    Glitch;

    string s,t; cin>>s>>t;
     rep(i,s.sz){cin>>arr[i];arr[i]--;}
    int l=0,r=s.sz-1,md;
    while(l<=r){
        md=(l+r)/2;
        if(check(s,t,md)){
            l=md+1;
        }else{
            //ans=md;
            r=md-1;
        }
    }
    cout<<r+1;


    return 0;
}