/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/START28C/problems/SUNDAY
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
    int n, i, getHolidays = 0;
    cin >> n;
    vector<int> vec(n);
    for (i = 0; i < n; i++)
        cin >> vec[i];

    getHolidays = 8;

    for (i = 0; i < n; i++)
    {
        if (vec[i] == 6 || vec[i] == 7 || vec[i] == 13 || vec[i] == 14 || vec[i] == 20 || vec[i] == 21 || vec[i] == 27 || vec[i] == 28)
            continue;
        else
            getHolidays++;
    }

    cout << getHolidays << endl;
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