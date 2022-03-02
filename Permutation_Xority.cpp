/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/START28C/problems/PERMXORITY
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
    int n, i;
    cin >> n;

    if (n == 2)
    {
        cout << "-1\n";
        return;
    }

    //  When N is ODD print all
    if (n % 2 != 0)
    {
        for (i = 1; i <= n; i++)
            cout << i << " ";
    }

    else
    {
        for (i = n - 1; i >= 2; i--)
            cout << i << " ";

        cout << n << " " << 1;
    }

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