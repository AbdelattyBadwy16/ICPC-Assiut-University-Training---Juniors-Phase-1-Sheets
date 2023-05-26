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
 string s1,s2;
 int c=0;
 getline(cin,s1);
 getline(cin,s2);
 int n=s2.size();
 for(int i=0 ; i<s2.size();i++)
 {
     if(s2[i]==32)
     {
         n--;
         continue;
     }

     for(int j=0 ;j<s1.size();j++)
     {
         if(s2[i]==s1[j])
         {
             c++;
             s1[j]='0';
             break;
         }
     }

 }
 //cout<<s1<<endl;
 //cout<<s2<<endl;
 if(c==n)
    cout<<"YES";
 else cout<<"NO";
    return 0;
}