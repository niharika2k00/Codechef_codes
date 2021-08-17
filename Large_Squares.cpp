
/* 
________________________________________
  - By Niharika Dutta
 Code Link :  https://www.codechef.com/START9C/problems/XLSQUARE
________________________________________
 */
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define loop1(n) for (ll i = 0; i < (n); i++)
#define loop2(n) for (ll i = 1; i <= (n); i++)
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)

bool isPerfectSquare(ll x)
{
    ll sr = sqrt(x);
    return (sr * sr == x);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // test
    {
        ll n, a, sq;
        bool res;
        cin >> n >> a;

        res = isPerfectSquare(n);
        // if (res)
        // {
        sq = sqrt(n);
        cout << sq << endl;
        cout << sq * a << endl;
        // }
    }
    return 0;
}