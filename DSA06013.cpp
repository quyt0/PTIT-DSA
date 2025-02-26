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
        int n, x;
        cin >> n >> x;

        int res = 0;
        for (int i = 0, tmp; i < n; i++)
        {
            cin >> tmp;
            if (tmp == x)
                res++;
        }

        cout << (res == 0 ? -1 : res) << '\n';
    }
    return 0;
}