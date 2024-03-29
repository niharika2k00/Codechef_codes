/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/FOUR21C/problems/S02E10
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
        int n, x, k, i, count = 0, diff = 0;
        cin >> n >> x >> k;

        vector<int> a(n), b(n);
        for (i = 0; i < n; i++)
            cin >> a[i];

        for (i = 0; i < n; i++)
            cin >> b[i];

        // Algorithm
        for (i = 0; i < n; i++)
        {
            diff = abs(a[i] - b[i]);
            if (diff <= k)
                count++;
        }

        if (count >= x)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}