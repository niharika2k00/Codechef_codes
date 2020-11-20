
// LINKS :: https://www.codechef.com/NOV20B/problems/RESTORE
//  Successfully runned and compiled..

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long i, j, MAX = 4000000;
    long long *a, *c;
    a = new long long[MAX];
    
    for (i = 2; i < MAX; i++)
        a[i] = 1;

    for (i = 2; i < sqrt(MAX); i++)
    {
        if (a[i] == 1)
            for (j = i; i * j < MAX; j++)
                a[i * j] = 0;   // non - prime.
    }

    int t;
    cin >> t;
    while (t--)
    {
        long long n, k = 2;
        cin >> n;
        long long *b;
        b = new long long[n];

        for (i = 0; i < n; i++)
            cin >> b[i];

        unordered_map<long long, long long> map;
        for (i = 0; i < n; i++)
        {
            if (map.find(b[i]) == map.end())
            {
                while (a[k] == 0)
                    k++;
                map[b[i]] = k;
                k++;
            }
        }
        for (i = 0; i < n; i++)
            cout << map[b[i]] << " ";
        cout << "\n";
    }
}
