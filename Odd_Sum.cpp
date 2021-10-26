/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/COOK134C/problems/ODDSUM
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
        ll n;
        cin >> n;

        if (n == 1 || n == 2)
            cout << "1\n";
        else
        {
            /*          1 + 0 + (even numbers)
                        1 + 0 + [2 , 4 ,6 ,8 ,... ]
                        N = 5  ,        1 + 0 + [3 terms]
                        N      ,        1 + 0 + n(n+1)
             */

            n = n - 2;
            cout << 1 + n * (n + 1) << endl;
        }
    }

    return 0;
}