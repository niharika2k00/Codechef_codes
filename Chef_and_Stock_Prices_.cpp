
/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/LTIME102C/problems/CSTOCK
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
        double s, a, b, c, val;
        cin >> s >> a >> b >> c;

        // if (c > 0)
        // val = s + ((c / 100.0) * s);
        // else
        val = s + ((c / 100.0) * s);

        if (val >= a && val <= b)
            cout << val << "YES\n";
        else
            cout << val << "NO\n";
    }

    return 0;
}