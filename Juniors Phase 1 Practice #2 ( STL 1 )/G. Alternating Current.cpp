#include <bits/stdc++.h>
#define tc int t; cin >> t; while(t--)
#define endl "\n"
#define all(v) v.begin(),v.end()
#define dd int n; cin>>n; int arr[n]; for(int i=0 ; i<n ; i++)cin>>arr[i];
#define ll long long
using namespace std;
const int N=1e5+7;
void abdo()
{

     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}


int main()
{
    abdo();
string s;
cin>>s;
stack<char>ss;
for(int i=0 ; i<s.size();i++)
{
    if(!ss.empty()&&ss.top()==s[i])
        ss.pop();
        else ss.push(s[i]);
}

if(ss.empty())cout<<"Yes";
else cout<<"No";

    return 0;
}