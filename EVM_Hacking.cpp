/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/START24C/problems/EVMHACK
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
    int a, b, c, p, q, r, max;
    // double got, totalVotes;

    cin >> a >> b >> c >> p >> q >> r;

    /*     totalVotes = (double)(p + q + r) / (double)2;

        max = (p > q) ? (p > r ? p : r) : (q > r ? q : r);

        if (a <= b && a <= c) // means a min so ignore
            got = (max + b + c);

        else if (b <= a && b <= c)
            got = (max + a + c);

        else
            got = (max + b + a);

        cout << (double)totalVotes << endl;
        if ((got) > (totalVotes))
            cout << "YES" << endl;
        else
            cout << "NO" << endl; */

    int totalVotes = (p + q + r) / 2;
    if ((a + b + r) > totalVotes || (a + q + c) > totalVotes || (p + b + c) > totalVotes)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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