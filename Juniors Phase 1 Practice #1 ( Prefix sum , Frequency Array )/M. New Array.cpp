/*
    Abdelatty Badwy
        Glitch00
                     */
#include <bits/stdc++.h>
#define ll long long
#define tc int t; cin >> t; while(t--)
#define endl cout<<"\n"
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
    ll n,q,x;
    tc
    {
        cin>>n>>q;
        int arr[n]={0};
        for(int i=0 ; i <q ; i++)
        {
            cin>>x;
            for(int j=x ; j<=n ;j+=x)
            {
                arr[j-1]=1;
            }
        }

        for(int i=0 ; i<n ;i++)
            cout<<arr[i]<<" ";
                endl;

    }

    return 0;
}