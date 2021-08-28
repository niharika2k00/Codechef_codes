/* 
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :    https://www.codechef.com/LTIME99C/problems/PROGLANG
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
        int a, b, a1, b1, a2, b2, a3, b3, a4, b4;
        cin >> a >> b >> a1 >> b1 >> a2 >> b2;

        if ((a == a1 && b == b1) || (a == b1 && b == a1))
            cout << "1\n";
        else if ((a == a2 && b == b2) || (a == b2 && b == a2))
            cout << "2\n";
        else
            cout << "0\n";
    }
    return 0;
}