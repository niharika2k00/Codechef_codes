
// LINKS :: https://www.codechef.com/problems/PLAYSTR

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

#define ll long long
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define loop1(n) for (ll i = 0; i < (n); i++)
#define loop2(n) for (ll i = 1; i <= (n); i++)
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)
// #define test  ll t; scanf("%d", &t);while (t--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    test
    {
        int n, s1 = 0, i, r1 = 0;
        cin >> n;
        string s, r;
        cin >> s >> r;
        for (i = 0; i < n; i++)
        {
            if (s[i] == '1')
                s1++;
            if (r[i] == '1')
                r1++;
        }
        if (s1 == r1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}