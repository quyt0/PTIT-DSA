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
    int a[100001];
    int f[100001] = {0};
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        f[a[i]] = f[a[i] - 1] + 1;
        k = max(k, f[a[i]]);
    }
    cout << n - k;
    return 0;
}