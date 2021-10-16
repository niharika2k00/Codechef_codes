/* 
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :   https://www.codechef.com/CDMN21C/problems/NODRUGS 
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
        int n, k, l, i, max = 0, drugGiven = 0, flag = 0;
        cin >> n >> k >> l;
        int speed[n];
        for (i = 0; i < n; i++)
            cin >> speed[i];

        max = *max_element(speed, speed + n);

        if (speed[n - 1] == max && drugGiven < l - 1)
            flag = 1;

        else
        {
            int fullDrugs = (l - 1) * k;
            if (speed[n - 1] + fullDrugs > max)
                flag = 1;
        }

        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}