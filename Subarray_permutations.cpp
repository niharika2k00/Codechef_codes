/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/LTIME104C/problems/SUBPERM
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
    int len, k, i;
    cin >> len >> k;

    vector<int> vec;
    for (i = 1; i <= len; i++)
        vec.push_back(i);

    if (len > 1 && k == 1)
    {
        cout << "-1\n";
        return;
    }

    // K good subsequence means  (n - k) we have to reverse.
    for (i = 1; i < k; i++)
        cout << i << " ";

    // Reverse
    for (i = len; i >= k; i--)
        cout << i << " ";

    cout << endl;
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