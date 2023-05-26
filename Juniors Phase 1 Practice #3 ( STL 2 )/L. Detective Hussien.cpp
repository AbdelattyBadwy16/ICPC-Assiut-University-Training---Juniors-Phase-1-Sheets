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

string getnext(string s){
        string t="";
        ll n=0;
        for(int i=0 ; i<s.sz ; i++){
         n=(n*10)+(s[i]-'0');
        }
        n++;
        while(n!=0){
        int x=n%10;
        t+=(x+'0');
        n/=10;
        }
        return t;
    }


int main()
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    Glitch;
    
    stack<pair<string,char>>f;
    stack<pair<string,char>>s;
    map<string,string>mp;

    ll n; cin>>n;
    string i="1";
    while(n--){
        string t; cin>>t;
        if(t=="define"){
            string v; cin>>v;
            mp[v]=i;
            i=getnext(i);            
            f.push({mp[v],'d'});
        }else if(t=="print"){
            string v; cin>>v;
            f.push({mp[v],'p'});
        }else if(t=="read"){
            string v; cin>>v;
            f.push({mp[v],'r'});
        }else{
            string var="",res="";
            for(int j=0 ; j<t.sz; j++){
                if((t[j]>='A' && t[j]<='Z') || (t[j]>='a' && t[j]<='z')){
                    var+=t[j];
                }else {
                    if(var.sz!=0){
                    res+=mp[var];
                    }
                    res+=t[j];
                    var="";
                }
            }
             if(var.sz!=0){
                    res+=mp[var];
                    }
            f.push({res,'p'});
        }
    }
        // while(!f.empty()){
        //     cout<<f.top().first<<" "<<f.top().second<<endl;
        //     f.pop();
        // }
        cin>>n;
    i="1";
    while(n--){
        string t; cin>>t;
        if(t=="define"){
            string v; cin>>v;
            mp[v]=i;
            i=getnext(i);            
            s.push({mp[v],'d'});
        }else if(t=="print"){
            string v; cin>>v;
            s.push({mp[v],'p'});
        }else if(t=="read"){
            string v; cin>>v;
            s.push({mp[v],'r'});
        }else{
            string var="",res="";
            for(int j=0 ; j<t.sz; j++){
                if((t[j]>='A' && t[j]<='Z') || (t[j]>='a' && t[j]<='z')){
                    var+=t[j];
                }else {
                    if(var.sz!=0){
                    res+=mp[var];
                    }
                    res+=t[j];
                    var="";
                }
            }
             if(var.sz!=0){
                    res+=mp[var];
                    }
            s.push({res,'p'});
        }

    }
     while(!s.empty() && !f.empty()){
            if(s.top()!=f.top() || s.sz!=f.sz)return cout<<"NO",0;
            s.pop();
            f.pop();
        }

   
    return cout<<"YES",0;
}
 