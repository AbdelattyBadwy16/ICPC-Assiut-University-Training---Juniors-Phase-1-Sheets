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
    ll n,flag=0;
    cin>>n;
    string s;
    cin>>s;
    int freq[26]={0};
    for(int i=0 ; i<n ; i++)
    {
        if(s[i]>='A' && s[i]<='Z')s[i]+=32;


        freq[s[i]-'a']++;

    }
    for(int i=0 ; i<26 ; i++)
    {

        if(freq[i]==0)
        {
            flag=1;
        break;
    }
    }


    if(flag==1)
        cout<<"NO";
    else cout<<"YES";
    return 0;
}