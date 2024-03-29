/* 
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/SEPT21C/problems/SHUFFLIN  
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
        int i, odd = 0, even = 0, n, oddNums = 0, evenNums = 0, ans = 0;
        cin >> n;
        int arr[n];
        for (i = 1; i <= n; i++)
            cin >> arr[i];

        even = n / 2;
        odd = n - even;

        for (i = 1; i <= n; i++)
        {
            if (arr[i] % 2 == 0)
                evenNums++;
            else
                oddNums++;
        }

        ans = min(oddNums, even) + min(evenNums, odd);
        cout << ans << endl;
    }

    return 0;
}