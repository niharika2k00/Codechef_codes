
/* 
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :    https://www.codechef.com/OCT21C/problems/THREEBOX
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
        int a, b, c, d, flag = 0;
        cin >> a >> b >> c >> d;

        if (a + b + c <= d)
            flag = 1;
        else if (a + b <= d || b + c <= d || c + a <= d)
            flag = 2;
        else
            flag = 3;

        cout << flag << endl;
    }

    return 0;
}