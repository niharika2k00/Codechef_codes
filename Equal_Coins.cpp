/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/NOV21C/problems/EQUALCOIN
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    test
    {
        int x, y, money = 0;
        cin >> x >> y;

        money = x + (2 * y);
        // if (money % 2 == 0)
        // cout << "YES\n";
        // else
        // cout << "NO\n";

        if (x % 2 == 0)
        {
            if (x == 0)
            {
                if (y % 2 == 0)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
            else
                cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}