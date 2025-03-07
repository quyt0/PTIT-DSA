#include <bits/stdc++.h>
#define pub push_back
#define pob pop_back
#define mkp make_pair
using namespace std;
typedef long long ll;
typedef double db;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int _max = INT_MIN, _min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            _max = max(_max, x);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            _min = min(_min, x);
        }
        cout << (ll) _max * _min << '\n'; 
    }
    return 0;
}