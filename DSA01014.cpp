#include <bits/stdc++.h>
#define pub push_back
#define pob pop_back
#define mkp make_pair
using namespace std;
typedef long long ll;
typedef double db;

int n, k, s;
int a[21], res;

void check()
{
    int sum = 0;
    for (int i = 1; i <= k; i++)
        sum += a[i];
    if (sum == s)
        res++;
}

void solve()
{
    if (k > n) return;
    for (int i = 1; i <= k; i++)
        a[i] = i;
    
    int ok = 0;
    while (!ok)
    {
        check();
        int i = k;
        while (i > 0 && a[i] == n - k + i)
            i--;
        if (i == 0)
            ok = 1;
        else
        {
            a[i]++;
            for (int j = i + 1; j <= k; j++)
                a[j] = a[j - 1] + 1;
        }
    }
}

int main()
{
    while (1)
    {
        cin >> n >> k >> s;
        if (n == 0 && k == 0 && s == 0)
            return 0;
        else
        {
            solve();
            cout << res << '\n';
            res = 0;
        }
    }
    return 0;
}