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
        int n;
        cin >> n;
        
        int a[1001];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int res = a[0] + a[1];
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (abs(a[i] + a[j]) < abs(res))
                {
                    res = a[i] + a[j];
                }
            }
        }

        cout << res << '\n';
    }
    return 0;
}