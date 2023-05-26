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

int n;
cin>>n;
ll arr[n],so[n],sum1[n],sum2[n];
for(int i=0 ; i<n ; i++)
{
    cin>>arr[i];
    so[i]=arr[i];
}
sort(so,so+n);

ll m,type,x=0,s=0,l,r;
for(int i=0 ; i<n ; i++)
{
   x+=arr[i];
   sum1[i]=x;
   s+=so[i];
   sum2[i]=s;

}
cin>>m;

for(int i=0 ; i<m ; i++)
{
    cin>>type>>l>>r;
    if(l==1 && type==1)
    {
        cout<<sum1[r-1]<<endl;
        continue;
    }
    else if(l==1 && type==2)
    {
        cout<<sum2[r-1]<<endl;
        continue;
    }
    r--;l--;

    if(type==1)
    {
        cout<<sum1[r]-sum1[l-1]<<endl;
    }
        else
            cout<<sum2[r]-sum2[l-1]<<endl;
}





//for(int i=0 ; i<n ;i++)cout<<sum1[i]<<" "<<sum2[i]<<endl;



    return 0;
}