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
        int n, l = 1001, r = 0;
        cin >> n;

        int f[1001] = {0};
        for (int i = 0, x; i < n; i++)
        {
            cin >> x;
            f[x]++;
            l = min(l, x);
            r = max(r, x);
        }

        int res = 0;
        for (int i = l; i <= r; i++)
        {
            if (f[i] == 0)
                res++;
        }
        cout << res << '\n';
    }
    return 0;
}