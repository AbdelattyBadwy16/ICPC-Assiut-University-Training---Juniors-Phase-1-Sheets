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


int main()
{
    Glitch;
    int n,x; cin>>n>>x;
    int arr[n]; rep(i,n)cin>>arr[i];
    sort(arr,arr+n);
    int ans=1e9,a,b;
    for(int i=0 ; i<n ; i++)
    {
       int l=0,r=n-1,md;
       bool f=0;
       if(arr[i]<0)f=1;// to know number positive or negative
       while(l<=r)
       {
           md=(l+r)/2;
          // cout<<abs(x-abs(arr[i]-arr[md]))<<" "<<ans<<endl;
           if(abs(x-(arr[i]-arr[md]))<ans){
              ans=abs(x-(arr[i]-arr[md]));
              a=arr[i];
              b=arr[md];
           }else if(abs(x-(arr[i]-arr[md]))==ans && arr[i]+arr[md]< a+b){
              a=arr[i];
              b=arr[md];
           }
           if(x>(arr[i]-arr[md]))
           {
                r=md-1;
           }else
           {
                l=md+1;
           }
       }
    }
     if(abs(x-(a-b))<abs(x-(b-a)))cout<<a<<" "<<b;
     else cout<<b<<" "<<a;
    return 0;
}