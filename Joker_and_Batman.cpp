
//           https://www.codechef.com/START6C/problems/JOKRBTMN
//              STARTERS ---> 2021 (JULY)
//                IMPORTANT GOOOD PROGRAMMM

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
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

    /* 
N -->  number of colors, 
M -->  number of lists,
L --> length of the strip,
 */
    test
    {
        int i, j, n, m, l, k, id, ans = 0;
        map<int, int> map;

        cin >> n >> m >> l;
        vector<int> strip(l);

        for (i = 0; i < m; i++) // m lists
        {
            cin >> k; // length of each list
            for (j = 0; j < k; j++)
            {
                cin >> id;
                map[id] = i;
            }
        }

        for (i = 0; i < l; i++)
            cin >> strip[i];

        for (i = 1; i < l; i++)
        {
            if (map[strip[i]] != map[strip[i - 1]])
                ans++;
        }

        cout << ans + 1 << endl;
    }

    return 0;
}