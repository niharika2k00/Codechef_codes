/* 
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :   https://www.codechef.com/OCT21C/problems/MEXOR 
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
        ll x, k = 1;
        cin >> x;

        if (x == 2 || x == 1)
            cout << "2\n";
        else if (x == 0)
            cout << "1\n";
        else
        {
            while (k * 2 <= x)
                k = k * 2;

            if (k == x)
                cout << x << endl;
            else if (x == 2 * k - 1)
                cout << x + 1 << endl;
            else
                cout << k << endl;
        }
    }

    return 0;
}