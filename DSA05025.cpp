#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;
typedef double db;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        ll a[51] = {0};
        a[0] = 0;
        a[1] = 1;
        a[2] = 2;
        a[3] = 4;

        for (int i = 4; i <= n; i++)
        {
            a[i] = a[i - 1] + a[i - 2] + a[i - 3];
        }
        
        cout << a[n] << '\n';
    }
    return 0;
}