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
        int n, s, m;
        cin >> n >> s >> m;

        int res = s * m / n;
        if (n < m || 6 * n < 7 * m)
            cout << -1;
        else
        {
            if (s * m % n == 0)
                cout << s * m / n;
            else
                cout << s * m / n + 1;
        }
        cout << '\n';
    }
    return 0;
}