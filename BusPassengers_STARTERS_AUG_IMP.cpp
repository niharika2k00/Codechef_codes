
/* 
________________________________________
  - By Niharika Dutta
 Code Link : https://www.codechef.com/START9C/problems/BUS
________________________________________
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
        int n, m, q, id, count = 0, flag = 0;
        char ch;
        string appendString;
        cin >> n >> m >> q;
        vector<string> v;

        while (q--)
        {
            cin >> ch;
            cin >> id;
            appendString = ch + to_string(id);
            v.push_back(appendString);

            if (ch == '+')
                count++;
            if ((ch == '-'))
            {
                string k = '+' + to_string(id);
                if (find(v.begin(), v.end(), k) != v.end()) // found it -- exsist
                    count--;
                else
                {
                    cout << "Inconsistent" << endl;
                    flag = 1;
                    // break;
                }
            }
            if (count > m)
            {
                cout << "Inconsistent" << endl;
                flag = 1;
                // break;
            }
        }

        if (flag == 0) //  0
            cout << "Consistent" << endl;
    }

    //  _________________________    USING HASH MAP   _________________________

    test
    {
        unordered_map<int, bool> mp;
        bool flag = true;

        while (q--)
        {
            cin >> ch;
            cin >> id;

            if (ch == '+')
            {
                mp[id] = true;
                if (mp.size() > m)
                    flag = false;
            }
            // '-' Case
            else
            {
                if (mp.find(id) != mp.end()) // mp[i] =  TRUE ,  Exists
                    mp.erase(mp.find(id));
                else
                    flag = false;
            }
        }

        if (flag)
            cout << "Consistent\n";
        else
            cout << "Insonsistent\n";
    }

    return 0;
}
