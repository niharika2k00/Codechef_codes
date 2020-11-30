#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define loop1(n) for (ll i = 0; i < (n); i++)
#define loop2(n) for (ll i = 1; i <= (n); i++)
#define test ll t; cin>>t; while(t--)

int main()
{
     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      ll customer, i, LENGTH;
    ll *maxi;
    cin >> customer;
    ll a[customer], b[customer];
    for (i = 0; i < customer; i++)
        cin >> a[i];
    LENGTH = sizeof(a) / sizeof(a[0]);
    // for (i = 0; i < customer; i++)
        sort(a, a + customer);

    for (i = 0; i < customer; i++)
    {
        b[i] = a[i] * LENGTH;
        LENGTH = LENGTH - 1;
    }

    maxi = max_element(b, b + customer);  // returns a pointer type 
    cout <<  *maxi << "\n";

    
    return 0;
}