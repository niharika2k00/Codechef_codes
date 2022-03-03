/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/COOK138C/problems/PERFPERM
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
    int n, k, i;
    cin >> n >> k;

    if (k > n)
    {
        cout << "-1" << endl;
        return;
    }

    if (n == 1 && k == 1)
    {
        cout << 1 << endl;
        return;
    }

    if (k == n)
    {
        for (i = 1; i <= n; i++)
            cout << i << " ";

        cout << endl;
        return;
    }

    for (i = 1; i <= k; i++)
        cout << i << " ";

    for (i = k + 1; i <= n; i++)
        cout << 1 << " ";

    cout << endl;
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