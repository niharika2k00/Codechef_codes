
//LINKS :: https://www.codechef.com/START7C/problems/FODCHAIN

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

#define ll long long
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
        int E, k, count = 0;
        cin >> E >> k;
        while (E > 0)
        {
            E = floor(E / k);
            count++;
        }
        cout << count + 1 << endl;
    }

    return 0;
}