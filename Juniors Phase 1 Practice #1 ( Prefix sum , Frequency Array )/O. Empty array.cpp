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
static int c=0,x=0;
void print(int ss[],int n,int x,int xx[],int z)
{
    if(x==z)return;
    for(int i=0 ; i<n ; i++)
    {
        if(ss[i]>0)
        {
            cout<<xx[i]<<" ";
            ss[i]--;
        }
    }
    cout<<endl;x++;
   print(ss, n,x,xx,z );
}

int main()
{
    abdo();
int n;
cin>>n;
int z=n;
int arr[n];
map<int,int>pp;
for(int i=0 ; i<n ; i++)
{
    cin>>arr[i];
    pp[arr[i]]++;
}
//print(pp,n,c);
int ss[pp.size()];
int xx[pp.size()];
for(auto it:pp)
{
    xx[c]=it.first;
    ss[c]=it.second;
    c++;
}
int s=pp.size();
print(ss, s,x,xx,z );
//for(int i=0 ; i<4 ; i++)cout<<ss[i]<<endl;
    return 0;
}