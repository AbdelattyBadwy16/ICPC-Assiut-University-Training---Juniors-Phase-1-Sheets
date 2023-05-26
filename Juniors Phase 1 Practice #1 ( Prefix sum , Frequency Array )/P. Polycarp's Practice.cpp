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

    int n,k; cin>>n>>k;
    int arr[n],sarr[n];
        rep(i,n){
        cin>>arr[i];
        sarr[i]=arr[i];
        }
        sort(sarr,sarr+n);
        reverse(sarr,sarr+n);
        map<int,int>mp;
        rep(i,k){
            mp[sarr[i]]++;
        }
        int sum=0,cnt=0;
        bool flag=0;
        vector<int>v;
        rep(i,n){
        cnt++;
        if(mp[arr[i]]!=0){
            sum+=arr[i];
            v.push_back(cnt);
            mp[arr[i]]--;
            flag=1;
            cnt=0;
        }

        }
        v[v.sz-1]+=cnt;
        cout<<sum<<endl;
        for(auto it:v)cout<<it<<" ";




    return 0;
}