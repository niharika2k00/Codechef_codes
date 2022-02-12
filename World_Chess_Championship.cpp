/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/FEB222C/problems/WCC
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
    int x, i, result = 0, chef = 0, draw = 0, carlsen = 0;
    cin >> x;
    string s;
    cin >> s;

    for (i = 0; i < 14; i++)
    {
        if (s[i] == 'C')
            carlsen++;
        else if (s[i] == 'N')
            chef++;
        else
            draw++;
    }

    if ()
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