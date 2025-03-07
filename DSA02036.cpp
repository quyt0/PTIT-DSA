#include <bits/stdc++.h>
#define pub push_back
#define pob pop_back
#define mkp make_pair
using namespace std;
typedef long long ll;
typedef double db;

int n, a[16], sum;
vector<int> x;

void dq(int pos)
{
    if (sum % 2 == 1)
    {
        for (int i : x)
            cout << i << ' ';
        cout << '\n';
        return;
    }

    if (pos >= n)
        return;

    sum += a[pos];
    x.pub(a[pos]);
    dq(pos + 1);
    sum -= a[pos];
    x.pob();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        dq(0);
    }
    return 0;
}