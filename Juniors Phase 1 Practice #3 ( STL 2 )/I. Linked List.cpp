/*


  ▄████  ██▓     ██▓▄▄▄█████▓ ▄████▄   ██░ ██
 ██▒ ▀█▒▓██▒    ▓██▒▓  ██▒ ▓▒▒██▀ ▀█  ▓██░ ██▒
▒██░▄▄▄░▒██░    ▒██▒▒ ▓██░ ▒░▒▓█    ▄ ▒██▀▀██░
░▓█  ██▓▒██░    ░██░░ ▓██▓ ░ ▒▓▓▄ ▄██▒░▓█ ░██
░▒▓███▀▒░██████▒░██░  ▒██▒ ░ ▒ ▓███▀ ░░▓█▒░██▓
 ░▒   ▒ ░ ▒░▓  ░░▓    ▒ ░░   ░ ░▒ ▒  ░ ▒ ░░▒░▒
  ░   ░ ░ ░ ▒  ░ ▒ ░    ░      ░  ▒    ▒ ░▒░ ░
░ ░   ░   ░ ░    ▒ ░  ░      ░         ░  ░░ ░
      ░     ░  ░ ░           ░ ░       ░  ░  ░

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

int n,q,a,c;
cin>>n>>q;
string arr[n];
string x;

for(int i=0 ; i<n ; i++)
{
    cin>>arr[i];
}
for(int i=0 ; i<q ; i++)
{
    cin>>a;c=0;
    if(a==1)
    {
        cin>>x;
       for(int i=0 ; i<n ; i++)
       {
           if(arr[i]==x)
           {
               c=1;
               arr[i]='0';
               break;
           }
       }
       if(c==0)cout<<"Not found"<<endl;
    }else if(a==2)
    {
        for(int i=0 ; i<n ;i++)
        {
            if(arr[i]!="0"){
                    c=1;
            cout<<arr[i]<<" ";
            }
            }
      if(c==0)cout<<"0";
        cout<<endl;
    }else
    {
        for(int i=n-1 ; i>=0 ; i--)
           {
               if(arr[i]!="0")
               {
                c=1;
            cout<<arr[i]<<" ";
               }
           }
           if(c==0)cout<<'0';
        cout<<endl;
    }
}
return 0;
}