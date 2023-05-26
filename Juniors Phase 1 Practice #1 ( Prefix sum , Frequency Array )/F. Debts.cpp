/*
    Abdelatty Badwy
        Glitch00
                     */
#include <bits/stdc++.h>
#define ll long long
#define tc int t; cin >> t; while(t--)
#define endl "\n"
#define dd int n; cin>>n; int arr[n]; for(int i=0 ; i<n ; i++)cin>>arr[i];
using namespace std;
void abdo()
{

     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    abdo();

    int n,m,a,b,z,a1,b1,c1;
    cin>>n>>m;
    //cin>>a1>>b1>>c1;
    pair<int,int>arr[n];
    int y[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>y[i];
    }
    for(int i=0 ; i<m ;i++)
    {

        cin>>a>>b>>z;
        arr[a-1].first=z;
        arr[b-1].second=z;
    }
    for(int i=0 ; i<n ; i++)arr[i].second+=y[i];
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i].first>arr[i].second)
            {
                cout<<"NO";
                return 0;
            }
    }

cout<<"YES";

    return 0;
}