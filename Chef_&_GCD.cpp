
//LINKS ::     https://www.codechef.com/COOK131C/problems/CHFGCD

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    test
    {
        int x, y, gcd, count = 0;
        cin >> x >> y;
        gcd = __gcd(x, y);
        if (gcd > 1)
            cout << "0\n";
        else if (__gcd(x + 1, y) > 1 || __gcd(x, y + 1) > 1)
            cout << "1\n";
        else
            cout << "2\n";
    }
    return 0;
}
