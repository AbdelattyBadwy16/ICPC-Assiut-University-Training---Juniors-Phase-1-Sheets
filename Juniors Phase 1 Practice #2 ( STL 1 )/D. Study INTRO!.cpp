#include <bits/stdc++.h>
#define tc int t; cin >> t; while(t--)
#define endl "\n"
#define all(v) v.begin(),v.end()
#define dd int n; cin>>n; int arr[n]; for(int i=0 ; i<n ; i++)cin>>arr[i];
#define ll long long
using namespace std;
const int N=1e5+7;
void abdo()
{

     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}


int main()
{
    abdo();
int n,flag=0;
cin>>n;
string arr[n],s,x;
for(int i=0 ; i<n ; i++)
{
    cin>>arr[i];
    if(arr[i]=="Header" || arr[i]=="EndHeader")
    {
        if( i!=0 && i!=n-1)flag=1;
}}
if(n%2==1)
{
    cout<<"WA";
    return 0;
}
if(arr[0]!="Header" || arr[n-1]!="EndHeader" || flag==1)
{
    cout<<"WA";
    return 0;
}
stack<string>ss;
for(int i=1 ; i<n-1 ; i++)
{
    if(arr[i]=="Cell"|| arr[i]=="Row"|| arr[i]=="Table")
    {
        ss.push(arr[i]);
    }else
    {
        if(ss.empty())
        {
            cout<<"WA";
            return 0;
        }
        s=arr[i];
        x=ss.top();int z=0;
        for(int j=3 ;j<arr[i].size() ; j++)
        {
            //cout<<s[j]<<" "<<x[z]<<endl;
            if(s[j]!=x[z])
            flag=1;

            z++;

        }
        if(flag==1)
        {
            cout<<"WA";
            return 0;
        }
        ss.pop();
    }
}

if(ss.empty())
cout<<"ACC";
else cout<<"WA";
    return 0;
}