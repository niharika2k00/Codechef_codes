/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/START17C/problems/NEWPIECE
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
        int a, b, p, q;
        cin >> a >> b >> p >> q;

        if (a == p && b == q)
            cout << "0\n";

        else
        {
            if (((a + b) % 2 == 0 && (p + q) % 2 == 0) || ((a + b) % 2 != 0 && (p + q) % 2 != 0)) //  same color
                cout << "2\n";

            else
                cout << "1\n";
        }
    }

    return 0;
}