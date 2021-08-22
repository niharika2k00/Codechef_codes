/* 
________________________________________
----------------------------------------
 Author :  Niharika Dutta
 Code Link :  https://www.codechef.com/COOK132C/problems/EQDIFFER  
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
        int n, i, value = 0;
        cin >> n;
        vector<int> vec(n);
        map<int, int> mp;

        for (i = 0; i < n; i++)
        {
            cin >> vec[i];
            mp[vec[i]]++;
            value = max(value, mp[vec[i]]);
        }

        if (n <= 2)
        {
            cout << "0" << endl;
            continue; // next iteration runs
        }
        else if (value == 1)
        {
            cout << n - 2 << endl;
            continue;
        }

        cout << n - value << endl;
    }

    return 0;
}