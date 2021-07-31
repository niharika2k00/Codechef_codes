

//LINKS ::         // https://www.codechef.com/LTIME98C/problems/BUTYPAIR

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
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
        ll i, n, j, count = 0;
        cin >> n;
        vll arr(n);
        map<ll, ll> map;

        for (i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        for (i = 0; i < n; i++)
            map[arr[i]]++;

        for (i = 0; i < n; i++)
        {
            if (((float)(arr[i] - arr[i + 1]) / (float)arr[i]) < ((float)(arr[i] - arr[i + 1]) / (float)arr[i + 1]))
                count++;
        }

        /*  for (i = 0; i < n; i++)
            cin >> arr[i];

        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (((float)(arr[i] - arr[j]) / (float)arr[i]) < ((float)(arr[i] - arr[j]) / (float)arr[j]))
                    count++;
            }
        } */

        cout << count * 2 << endl;
    }
    return 0;
}