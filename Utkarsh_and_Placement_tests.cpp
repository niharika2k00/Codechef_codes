
/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/DEC21C/problems/UTKPLC
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
        char a, b, c, x, y;
        cin >> a >> b >> c;

        // string s[3];
        // cin >> s[0] >> s[1] >> s[2];
        cin >> x >> y;

        if (a == x || a == y)
            cout << a << endl;

        else
            cout << b << endl;
    }

    return 0;
}
