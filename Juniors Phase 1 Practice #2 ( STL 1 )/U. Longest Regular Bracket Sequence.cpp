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

    string s; cin>>s;
    stack<int>st;
    ll cnt=0,ans=0,temp=0;
    map<ll,int>mp;
    st.push(0);
    rep(i,s.sz){
    if(s[i]==')' || s[i]==']' || s[i]=='>' || s[i]=='}'){
        if(!st.empty()){
             //   cout<<(char)st.top()<<" "<<s[i]<<" "<<i<<endl;
        if(s[st.top()-1]=='(' && s[i]==')')st.pop();
        else if(s[st.top()-1]=='{' && s[i]=='}')st.pop();
        else if(s[st.top()-1]=='[' && s[i]==']')st.pop();
        else if(s[st.top()-1]=='<' && s[i]=='>')st.pop();
        else {
        //while(!st.empty())st.pop();
        st.push(i+1);
        continue;
        }

        int len=i-st.top()+1;
       // cout<<len<<endl;
        if(len==ans)cnt++;
        if(len>ans){
            ans=len;
            cnt=1;
        }

       }else {
       st.push(i+1);
       }
       }else{
       st.push(i+1);
       }

    }

    //mp[0]=1;
    if(ans==0)cnt=1;
    cout<<ans<<" "<<cnt ;

    return 0;
}