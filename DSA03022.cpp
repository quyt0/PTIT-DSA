#include <bits/stdc++.h>
#define pub push_back
#define pob pop_back
#define mkp make_pair
using namespace std;
typedef long long ll;
typedef double db;

int main()
{
    int n;
    cin >> n;
    int a[10001];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    cout << max({a[n - 1] * a[n - 2] * a[n - 3], a[n - 1] * a[n - 2], a[0] * a[1], a[0] * a[1] * a[n - 1]});
    return 0;
}