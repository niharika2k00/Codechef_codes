
//LINKS ::      https://www.codechef.com/AUG21C/problems/CHFINVNT

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
        // 18 9 5
        ll int n, p, k, ans = 0, x, mod, i;
        cin >> n >> p >> k;

        mod = p % k; // 4
        mod = mod - 1;

        // 2 size extra after 15 (last no. divisibe by 5 here)
        x = (n - 1) - ((n - 1) / k) * k; // 17 - 15 = 2

        if (mod > x)
            ans = ans + (x + 1) * (((n - 1) / k) + 1) + (mod - x) * ((n - 1) / k);

        else
            ans = ans + (mod + 1) * ((n - 1) / k + 1);

        for (i = mod + 1; i < n; i = i + k)
        {
            ans++;
            if (i == p)
            {
                cout << ans << endl;
                break;
            }
        }
    }
    return 0;
}