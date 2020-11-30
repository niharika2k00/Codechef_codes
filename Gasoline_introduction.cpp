
//LINKS :: https://www.codechef.com/LTIME90B/problems/BEGGASOL

#include <bits/stdc++.h>
using namespace std;

#define ll long long
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

    test
    {

        int n, i, petrol = 1, dist = 0, total;
        cin >> n;
        vi f;
        for (i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            f.pb(tmp);
        }
        petrol = f[0];
        for (i = 1; i < n; i++)
        {
            if (petrol - 1 >= 0)
            {
                petrol = petrol - 1 + f[i];
                dist++;
            }
            if (petrol <= 0)
                break;
        }

        if (petrol >= 0)
            total = dist + petrol;

        cout << total << endl;
    }
    return 0;
}

/* cout << "\nVector elements are: ";
for (auto it = f.begin(); it != f.end(); it++)
    cout << *it << " ";

cout << "The vector elements are: ";
for (i = 0; i < f.size(); i++)
    cout << f[i] << " "; */