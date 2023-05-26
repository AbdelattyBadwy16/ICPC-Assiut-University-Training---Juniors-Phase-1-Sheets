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
	int n;
	 char x;
	cin>>n;
	deque<int>aa;
	int a;
	for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        aa.push_back(a);
    }
    priority_queue<int>ss;
 int q,it;
 cin>>q;
 for(int i=0 ; i<q ; i++)
 {

     cin>>x;
    if(aa.size()){
    if(x=='L')
    {
      if(!aa.empty()){
      ss.push(aa.front());
      aa.pop_front();
      }
    }else if(x=='R')
    {
        if(!aa.empty()){
        ss.push(aa.back());
        aa.pop_back();
        }
    }
    }
    if(x=='Q')
    {
        if(ss.empty())cout<<-1<<endl;
        else{
         it=ss.top();
        cout<<it<<endl;
        ss.pop();
        }
    }
 }



return 0;
}