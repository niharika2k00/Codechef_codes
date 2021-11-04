/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/LTIME101C/problems/CHEFCAR
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

    int n, v;
    cin >> n >> v;
    int min = 0, max = (n * (n - 1)) / 2; //  n * (n+1) / 2 ,  but here n=(n-1)
    if (v == 1)
    {
        cout << max << ' ' << max << endl;
        return;
    }

    if (v >= n - 1)
        min = n - 1; //  1 * (n-1)
    else
        min += v + ((n - v) * (n - v + 1)) / 2 - 1;

    cout << max << ' ' << min << endl;

    return 0;
}