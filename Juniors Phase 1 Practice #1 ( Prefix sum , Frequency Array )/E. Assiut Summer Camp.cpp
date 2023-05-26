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
    string name[4]={"Hussien","Atef","Karemo","Ezzat"};
    int arr[4];
    int a=INT_MIN,b=INT_MIN;
    int id1,id2;
tc
{
a=INT_MIN;b=INT_MIN;
for(int i=0 ; i<4 ; i++)
{
    cin>>arr[i];
    if(arr[i]>a)
    {
    a=arr[i];
    id1=i;
    }

}
for(int i=0 ; i<4 ; i++)
{
    if(arr[i]>b && i!=id1)
    {
    b=arr[i];
    id2=i;
    }

}
cout<<name[id1]<<" "<<name[id2]<<endl;
}


    return 0;
}