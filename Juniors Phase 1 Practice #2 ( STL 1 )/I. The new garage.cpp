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
int n,c=1;
cin>>n;
int x;
int maxx=0;
stack<int>ss;
for(int i=0 ; i<n ; i++)
{
    cin>>x;
    if(x>maxx)
    {
        maxx=x;
        for(int i=c ; i<=maxx ; i++)
        {
            ss.push(i);
        }
        ss.pop();
        c=maxx+1;
    }else
    {
        if(ss.top()!=x)
        {
            cout<<"NO";
            return 0;
        }else
        ss.pop();
    }


}
cout<<"YES";
    return 0;
}