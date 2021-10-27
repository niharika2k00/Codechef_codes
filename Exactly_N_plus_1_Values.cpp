/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/LTIME101C/problems/N1VALUES
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
        ll n, power, i, sum = 0;
        cin >> n;
        power = pow(2, n);

        if (n == 1)
            cout << "1 1\n";
        else
        {
            for (i = 1; i < n; i++)
            {
                cout << i << " ";
                sum = sum + i;
            }
            // cout << i - 1 << " " << power - (n * (n + 1) / 2) + 1;
            cout << i - 1 << " ";
            sum = sum + i - 1;
            cout << power - sum << endl;
        }
    }

    return 0;
}
