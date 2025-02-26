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
        int n, k;
        cin >> n >> k;

        int a[101];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n, greater<int>());
        for (int i = 0; i < k; i++)
            cout << a[i] << ' ';
        cout << '\n';
    }
    return 0;
}