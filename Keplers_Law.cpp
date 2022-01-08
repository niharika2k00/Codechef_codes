/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/JAN221C/problems/KEPLERSLAW
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
        int t1, t2, r1, r2;
        cin >> t1 >> t2 >> r1 >> r2;

        float left = pow(t1, 2) / pow(r1, 3);
        float right = pow(t2, 2) / pow(r2, 3);

        if (left == right)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}