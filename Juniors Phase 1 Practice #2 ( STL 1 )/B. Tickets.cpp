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
     int n;
     cin>>n;
     queue<int>ss;int a,b;
     for(int i=0 ; i<n ; i++)
     {
         cin>>a>>b;
         if(a==1)
         {
             ss.push(b);
         }else
         {
             if(ss.front()==b)
                 cout<<"Yes"<<endl;
             else cout<<"No"<<endl;
             ss.pop();
         }
     }
    return 0;
}
