/* 
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :   https://www.codechef.com/START13C/problems/DIWALI1 
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
        ll budget, a, b, c, x, y, maxNum = 0;
        cin >> budget >> a >> b >> c >> x >> y;

        /* 
     Cost to light Up 1 Anar =  (a * x ) + b;
     Cost to light Up 1 Charki =  (y * a) + c;
        */

        maxNum = min((a * x) + b, (y * a) + c);
        cout << budget / maxNum << endl;
    }

    return 0;
}