/* 
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :     https://www.codechef.com/LTIME99C/problems/MXEVNSUB
 Time Complexity :  
________________________________________
----------------------------------------
 */
#include <bits/stdc++.h>
#include <iostream>

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
        int n, sum = 0;
        cin >> n;
        vector<int> arr;
        sum = n * (n + 1) / 2;

        if (sum % 2 == 0)
            cout << n << endl;
        else
            cout << n - 1 << endl;
    }
    return 0;
}