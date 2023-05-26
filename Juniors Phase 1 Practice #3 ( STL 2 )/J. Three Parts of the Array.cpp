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

ll n,l=-1,r=0,sum1=0,sum3=0,ans=0;
cin>>n;
vector<int>ss;
int x;
for(int i=0;  i<n ; i++)
{
    cin>>x;
    ss.push_back(x);
}
r=n;

if(n==1)
{
    cout<<0;
    return 0;
}
while(l<r)
{
    if(sum1==sum3)
    {
        ans=sum1;
        l++;
        r--;
        sum1+=ss[l];
        sum3+=ss[r];
        if(sum1==sum3)
            ans=sum1;
    }else if(sum1>sum3)
    {
        r--;
        sum3+=ss[r];
    }else if(sum1<sum3)
    {
        l++;
        sum1+=ss[l];
    }

    if(sum1==sum3)ans=sum1;
    if(n%2==0 && r-l==1)break;
     if(n%2==1 && r-l<=2 && sum1==sum3) break;

}
cout<<ans;

return 0;
}