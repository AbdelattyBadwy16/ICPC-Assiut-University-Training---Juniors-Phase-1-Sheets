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
    stack<ll>st;
    ll x=0;
    bool flag=0,temp=0;
    tc{
    string s; cin>>s;
    if(s=="add")
    {

        if(st.empty())x++;
        else {

                if(temp==1){flag=1;continue;}
                x+=st.top();
                if(x>pow(2,32)-1){flag=1;continue;}
        }

    }else if(s=="for"){
    int n; cin>>n;

    if(st.empty())st.push(n);
    else if(st.top()*n<pow(2,32)-1 && st.top()!=-1){
        st.push(st.top()*n);
        temp=0;
    }
    else{
        st.push(-1);
        temp=1;
    }

    }else {
        st.pop();
        if(!st.empty()&&st.top()!=-1)temp=0;
    }
    }
    if(flag || x>pow(2,32)-1)cout<<"OVERFLOW!!!";
    else cout<<x;


    return 0;

}