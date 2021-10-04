/* 
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/OCT21C/problems/ANDSUBAR  
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
        ll n, i, bitwiseAnd = 0, k = 1, maxlength = 0;
        cin >> n;

        // for (i = 1; i <= n; i++)
        // {
        //     // bitwiseAnd = bitwiseAnd & arr[i];
        // if (bitwiseAnd > 0)
        //     k   2 < n= i + 1;

        if (n == 1)
        {
            cout << "1\n";
            continue;
        }

        while (k * 2 <= n)
            k = k * 2;

        maxlength = n - k + 1;

        if (n == k)
            cout << n / 2 << endl;
        else
            cout << max(maxlength, k / 2) << endl;
        // }
    }

    return 0;
}