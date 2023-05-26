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
int arr[n][n];
for(int i=0 ; i <n ; i++)
{
    for(int j=0 ; j<n ; j++)
    {
    cin>>arr[i][j];
    }
}
int freq[n]={0},maxx,id,c,flag=0;
vector<int>ss(n);
for(int i=0 ; i<n ;i++)
{
memset(freq,0,sizeof(freq));
    for(int j=0 ;j<n ;j++)
    {
        freq[arr[i][j]]++;
    }
    maxx=INT_MIN,c=0;
    for(int j=0 ; j<n ; j++)
    {
        if(freq[j]==freq[j-1]&&j!=0)c++;
        if(maxx<freq[j])
        {
            maxx=freq[j];
            id=j;
        }
    }
    //cout<<c<<endl;
    if(c==n-1 && flag==0)
    {
        cout<<n<<" ";
        flag=1;
    }
    else if(c==n-1 && flag==1)
        cout<<n-1<<" ";
    else
    {
        cout<<id<<" ";
    }

}






    return 0;
}