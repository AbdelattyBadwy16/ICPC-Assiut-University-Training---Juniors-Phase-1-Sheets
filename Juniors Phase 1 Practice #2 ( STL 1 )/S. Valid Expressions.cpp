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

    tc{
    string s; cin>>s;
    ll ope=0,digit=0;
    int d=0,n=0,p=0;
    rep(i,s.sz){
    if(s[i]=='*' || s[i]=='/' || s[i]=='+' || s[i]=='-'){
        ope++;
        if(s[i]=='-')n=1;
        if(s[i]=='/')d++;
    }else{
        digit++;
        if(s[i]-'0'>0)p++;
    }
    }

    if(digit-ope==1){
        if(d)p-=d;
        if(p>=0)cout<<"Valid"<<endl;
        else cout<<"Invalid"<<endl;
    }else if(digit-ope==0){
        if(d)p-=d;
        if(n)p--;
        if(p>=0 && n)cout<<"Valid"<<endl;
        else cout<<"Invalid"<<endl;
    }else cout<<"Invalid"<<endl;

    }

    return 0;
}