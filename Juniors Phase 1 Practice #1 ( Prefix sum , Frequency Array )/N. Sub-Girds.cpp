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

bool arr[1000+5][1000+5];

int main()
{

    Glitch;
    tc{
    int n,w,h; cin>>w>>h>>n;
    int x1,x2,y1,y2;
    mem(arr,false);
    rep(i,n){
        cin>>x1>>y1>>x2>>y2;
        if(x1>x2)swap(x1,x2);
        if(y1>y2)swap(y1,y2);

        for(int k=x1 ; k<=x2 ; k++){
            for(int j=y1; j<=y2; j++){
                //cout<<i<<" "<<j<<endl;
                arr[k][j]=true;
            }
        }
    }
    int ans=0;
    for(int i=1 ; i<=w ; i++){
            for(int j=1; j<=h; j++){
                if(arr[i][j]==0)ans++;
        }
    }
    cout<<ans<<endl;
    }
    return 0;

}