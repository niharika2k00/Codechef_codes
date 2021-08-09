
//LINKS ::        https://www.codechef.com/AUG21C/problems/PROBDIFF

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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == b && b == c && c == d && d == a) // all same
            cout << "0\n";
        else if (a == b && b == c || b == c && c == d || c == d && d == a || d == a && a == b) // 3 same
            cout << "1\n";
        else
            cout << "2\n";
    }

    return 0;
}