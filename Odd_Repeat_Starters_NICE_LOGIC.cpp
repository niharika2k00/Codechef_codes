/* 
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :   https://www.codechef.com/START10C/problems/REPEAT 
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
        // METHOD -1
        ll n, k, s, number;
        cin >> n >> k >> s;

        s = s - (n * n);
        number = s / (k - 1);
        cout << number << endl;
    }

    return 0;
}

// METHOD -  2 -
/* 
test{
      ll n, k, sum, j = 1, s = 0, remain = 0, flag = 0, ans = 0, i, q;
        cin >> n >> k >> sum;
        vector<ll> odd(n, 0);

        for (q = 0; q < n; q++)
        {
            odd[q] = j;
            s += j;
            j += 2;
        }

        k = k - 1;
        remain = sum - s;

        for (i = 0; i < n; i++)
        {
            if ((odd[i] * k) == remain)
            {
                cout << odd[i] << endl;
                break;
            }
        }
}
 */