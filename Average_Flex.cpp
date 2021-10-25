/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/COOK134C/problems/AVGFLEX
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
        int n, i, j, count = 0, boastStudent = 0;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];

        for (i = 0; i < n; i++)
        {
            count = 0;
            for (j = 0; j < n; j++)
            {
                if (a[i] >= a[j])
                    count++; //  scoring less than and equals to
            }
            if (count > n - count)
                boastStudent++;
        }

        cout << boastStudent << endl;
    }

    return 0;
}