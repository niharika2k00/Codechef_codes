/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/JAN221C/problems/COVSPRD
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
        int population, d, infected = 1, i;
        cin >> population >> d;

        // if (d == 0  && population != 0 )
        // cout << "1\n";

        for (i = 1; i <= d; i++)
        {
            if (i <= 10)
            {
                infected = infected * 2;
                if (infected > population)
                {
                    infected = population;
                    break;
                }
            }

            if (i > 10) //  from 11 th day it will Tripple
            {
                infected = infected * 3;
                if (infected > population)
                {
                    infected = population;
                    break;
                }
            }
        }

        cout << infected << endl;
    }

    return 0;
}