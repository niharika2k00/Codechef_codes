/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/LTIME104C/problems/SUBSTADD
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
        int len, x, y, flag = 0, count = 0;
        cin >> len >> x >> y;

        int vecA[len], vecB[len];

        for (int i = 0; i < len; i++)
            cin >> vecA[i];

        for (int j = 0; j < len; j++)
            cin >> vecB[j];

        for (int i = 0; i < len; i++)
        {
            // Difference not matches
            if (vecB[i] - vecA[i] == x || vecB[i] - vecA[i] == y)
                count++;
        }

        if (count == len)
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}