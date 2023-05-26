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
int n,q,x;
cin>>n>>q;
int arr[n];
for(int i=0 ; i<n ;i++)
{
    cin>>arr[i];
}
sort(arr,arr+n);
for(int i=0 ; i<q ; i++)
{
    cin>>x;
    cout<<upper_bound(arr,arr+n,x)-arr<<" ";

}

    return 0;
}