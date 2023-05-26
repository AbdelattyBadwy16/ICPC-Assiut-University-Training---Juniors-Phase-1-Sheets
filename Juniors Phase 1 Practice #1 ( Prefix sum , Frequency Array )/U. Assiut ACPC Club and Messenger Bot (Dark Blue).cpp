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
    map<int,vector<char>>mp;
    string tt;
    ll cost[26];
    rep(i,26){
       cin>>cost[i];
       mp[cost[i]].push_back((char)('a'+i));
    }
    int cnt=0;
    string t="";
    vector<int>v;
    rep(i,s.sz){
     if(s[i]!='?')t+=s[i];
     else if(s[i]=='?' && i!=0 && s[i-1]!='?'){t+=s[i];cnt++;}
     else if(s[i]=='?' && i!=0 && s[i-1]=='?'){cnt++;}
     else if(s[i]=='?' && i==0 ){t+=s[i];cnt++;}
     if(s[i]!='?' && cnt!=0){v.push_back(cnt);cnt=0;}
     if(i==s.sz-1 && cnt!=0){
            //cout<<55;
        v.push_back(cnt);
        cnt=0;
     }
     //cout<<cnt;
    }
    //cout<<cnt;
    vector<char>ch;
    //cout<<v.sz<<endl;
    char temp='0';
    rep(i,t.sz)if(t[i]!='?'){temp=t[i];break;}
    if(temp=='0')temp='a';
    else{
         int x=cost[temp-'a'];
          sort(all(mp[x]));
          //cout<<x<<endl;
          temp=mp[x][0];
    }
    bool flag=0;
    //cout<<v[0]<<endl;
    tt=t;
    rep(i,t.sz){

       if(t[i]=='?' && !flag){
          t[i]=temp;
          ch.push_back(temp);
       }else if(t[i]=='?' && flag && i!=t.sz-1){
          char y;
          int c=cost[t[i-1]-'a'];
          int e=cost[t[i+1]-'a'];
          for(int i=0 ; i<26 ; i++){
            if(cost[i]>=min(c,e)&&cost[i]<=max(c,e)){
                y=(char)(i+'a');
                break;
            }
          }
          //cout<<c<<" "<<e<<endl;
          t[i]=y;
          ch.push_back(y);
       }else if(t[i]=='?' && i==t.sz-1){
          int x=cost[t[i-1]-'a'];
          //cout<<t[i-1]-'a'<<endl;
          //int x=min(cost[t[i-1]-'a'],cost[t[i+1]-'a']);
          sort(all(mp[x]));
          //cout<<x<<endl;
          char y=mp[x][0];
          t[i]=y;
          ch.push_back(y);

       }else flag=1;

    }
   //cout<<t<<endl;
   string ans="";
   int j=0;
   rep(i,tt.sz){
       if(tt[i]!='?')ans+=tt[i];
       else if(j<v.sz){
        //cout<<v[j]<<endl;
        rep(w,v[j]){
          ans+=ch[j];
         // cout<<ch[j];
        }
        j++;
       }
   }
   ll sum=0;
   rep(i,ans.sz-1)sum+=abs(cost[ans[i]-'a']-cost[ans[i+1]-'a']);
   cout<<sum<<endl;
   cout<<ans;
    return 0;
}