/*                                             بسم الله الرحمن الرحيم                                   */
#include <bits/stdc++.h>

using namespace std;
/*                                                    defines                                          */
#define ll long long
#define ld long double
#define vec(type, name, size) vector<type> name(size);
#define vec_2d(type, name, size) vector<type> name[size];
#define _3Amor_ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define cin(v) for (auto &i: v) cin >> i
#define cout(v) for (auto &i: v) cout << i << " "
#define loop(a, b, c) for (int a = b; a < c; ++a)
#define Test ll t; cin >> t; while (t--)
#define stringToLower(s)  transform(all(s), s.begin(), tolower);
#define stringToUpper(s)  transform(all(s), s.begin(), toupper);
#define fixed(n) fixed << setprecision(n)
#define gcd(a, b) __gcd(a,b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define sz size()
#define F first
#define S second
#define el '\n'
#define sqrt sqrtl
#define sumi(n) ((n*(n+1))/2)
//// ordered_set
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//// can change data type |here|
//#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
///*
// * order_of_key()
// * find_by_order() ---> iterator
// */
//// ordered_set
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/


int main() {

    _3Amor_

    Test {
        ll n, h; cin >> n >> h; vector <ll> v(n+2, 0);
        for (int i = 1; i <= n; ++i) {int l, r; cin >> l >> r; v[l]++, v[r+1]--;}
        for (int i = 1; i <= n; ++i) v[i] += v[i-1];
        for (int i = 1; i <= n; ++i) v[i] += v[i-1];
        ll mn = 1e15;
        for (int i = 0; i + h <= n; i++) mn = min(mn, (n * h) - (v[i+h] - v[i]));
        cout << mn << el;
    }
}
