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
bool cmp(string a,string b)
{
    return a.size()<b.size();
}
void abdo()
{

     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
	abdo();
int n,l,r,c=0,z=1,v=0;
cin>>n;
string arr[n],x,s;
for(int i=0 ; i<n ;i++)cin>>arr[i];

sort(arr,arr+n,cmp);
for(int i=0 ; i<n-1 ;i++)
{
    x=arr[i];s=arr[i+1],l=x.size(),r=s.size();c=0;
    for(int j=0 ; j<r; j++)
    {
        v=0;c=0;
        if(x[0]==s[j] && x[l-1]==s[j+l-1])
        {
           for(int h=j;h<l+j;h++)
           {
              // cout<<x[v]<<" "<<s[h]<<endl;
               if(x[v]==s[h])c++;
               v++;
           }
          // cout<<c<<endl;
           if(c==l)
           {
               z++;
               break;
           }else {c=0;}
        }
    }
}
//cout<<z<<endl;
if(z==n)
{
    cout<<"YES"<<endl;
    for(int i=0 ; i<n ; i++)
        cout<<arr[i]<<endl;
}else
cout<<"NO";

return 0;
}