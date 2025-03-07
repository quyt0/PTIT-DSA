#include <bits/stdc++.h>
#define pub push_back
#define pob pop_back
#define mkp make_pair
using namespace std;
typedef long long ll;
typedef double db;

const int mod = 1e9 + 7;

ll solve(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b % 2 == 0)
        {
            res * a
            b /= 2;
        }
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        cout << solve(n, k) % mod << '\n';
    }
    return 0;
}