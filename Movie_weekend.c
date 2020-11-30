
// LINKS :: https://www.codechef.com/problems/MOVIEWKN

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

#define ll long long
#define pb push_back
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
        int n, index=0, max, i;
        cin >> n;
        int l[n], r[n];
        // vector<int> l,r;        
        for (i = 0; i < (n); i++)
            cin >> l[i];
        //   l.push_back(i);

        for (i = 0; i < (n); i++)
            cin >> r[i];
        //   r.push_back(i);

        max = l[0] * r[0];
        for (i = 0; i < n; i++)
        {
            if ((l[i] * r[i]) > max)
            {
                max = (l[i] * r[i]);
                index = i;
            }
            else if (l[i] * r[i] == max)
            {
                if (r[i] > r[index])
                {
                    max = l[i] * r[i];
                    index = i;
                }
            }
        }
        cout << index + 1 << "\n";
    }
    return 0;
}