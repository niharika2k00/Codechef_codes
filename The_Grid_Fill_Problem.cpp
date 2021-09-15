/* 
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/START11C/problems/FILLGRID  
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
        ll n, i, j;
        cin >> n;

        if (n % 2 == 0)
        {
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                    cout << "-1 ";
                cout << "\n";
            }
        }

        else // if n = ODD
        {
            for (i = 0; i < n; i++)
                for (j = 0; j < n; j++)
                {
                    if (j == i)
                        cout << "-1 ";
                    else
                        cout << "1 ";
                }
            cout << "\n";
        }
    }

    return 0;
}