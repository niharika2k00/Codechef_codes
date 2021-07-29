
//LINKS ::  // https://www.codechef.com/COOK131C/problems/XORORED

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
        int n, i, res = 0;
        int Max = INT_MIN;
        cin >> n;
        vi a(n); // vector
        for (i = 0; i < n; i++)
            cin >> a[i];

        Max = *max_element(a.begin(), a.end());
        for (i = 0; i < n; i++)
        {
            a[i] = a[i] ^ Max; // xor operator
            res = res | a[i];
        }

        cout << Max << " " << res << endl;
    }

    return 0;
}