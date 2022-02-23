/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/START26C/problems/SMOKE
 Time Complexity :
________________________________________
----------------------------------------
 */
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define ll long long
#define lli long long int
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

void solve()
{
    int human, x, y;
    cin >> human >> x >> y;

    // int result = (human + 99) / 100 * x;
    // result = min(result, (human + 3) / 4 * y);
    // result = min(result, ((human / 100) * x) + ((human % 100) + 3) / 4 * y);
    // cout << result << endl;

    double bus = ceil(human / (double)100);
    double car = ceil(human / (double)4);

    ll b = n / 100;
    ll remaining = n % 100;
    ll c = ceil(remaining / (double)4);

    ll res = min({bus * x, car * y, b * x + c * y});
    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    test
    {
        solve();
    }

    return 0;
}