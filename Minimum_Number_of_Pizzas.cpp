/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/LTIME102C/problems/MINPIZZAS
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

lli gcd(lli a, lli b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);

    // return (a / gcd(a, b)) * b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    test
    {
        lli n, k, ans = 0, res = 0;
        cin >> n >> k;

        // if (n > k)
        ans = n / gcd(n, k);

        cout << ans << endl;
    }

    return 0;
}