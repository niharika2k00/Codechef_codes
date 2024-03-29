/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/START26C/problems/LOSTSEQ
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
    int n, i, len = 0, sum = 0;
    cin >> n;
    len = n * 2;
    vector<int> vec(len);
    for (i = 0; i < len; i++)
    {
        cin >> vec[i];
        sum = sum + vec[i];
    }

    //  CountEven == len || CountOdd == len || CountEven == CountOdd
    //  as (a + k) + (a - k)  will becomes 2a so it will always be positive.
    if (sum % 2 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
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