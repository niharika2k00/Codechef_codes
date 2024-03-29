/* 
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :    https://www.codechef.com/START14C/problems/FIXFIX
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
        ll n, k, i;
        cin >> n >> k;

        if ((k == n - 1) || (k > n))
            cout << "-1\n";

        else if (k == n)
        {
            for (i = 1; i <= n; i++)
                cout << i << " ";
            cout << "\n";
        }

        else
        {
            for (i = 1; i <= k; i++)
                cout << i << " ";
            for (i = k + 2; i <= n; i++) // Shifted elements
                cout << i << " ";
            cout << k + 1 << endl;
        }
    }

    return 0;
}

/* 
            INTUITION 
    --------------------------

    - Put k elements sequentially
    - Rest elements put one place shifted

 */