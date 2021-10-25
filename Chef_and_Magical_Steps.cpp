/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/START16C/problems/CHEFMGX
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
vector<int> prime(10000001, 1); // Default value for prime array
vector<int> totalPrime(10000001, 0);

void sieveOfErathosthenes()
{
    int i, j;

    prime[0] = 0;
    prime[1] = 0;

    for (i = 2; i * i <= 10000000; i++)
    {
        if (prime[i])
        {
            for (j = i * i; j <= 10000000; j = j + i) //  all multiples of i should be marked 0
                prime[j] = 0;
        }
    }

    for (j = 2; j <= 10000000; j++)
        totalPrime[j] = prime[j] + totalPrime[j - 1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    test
    {
        int x, y;
        cin >> x >> y;
        int ans = y - x;

        sieveOfErathosthenes();

        if ((x == 1 && y == 2) || (x == 1 && y == 3) || (x == 2 && y == 3))
        {
            cout << "2\n";
            break;
        }
        else
        {
            ans = ans - (totalPrime[y] - totalPrime[x]);
            if (prime[x + 1])
                ans = ans + 1;

            cout << ans << "\n";
        }
    }

    return 0;
}