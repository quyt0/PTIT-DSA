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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        int l = 0, m = 0, r = n - 1;
        while (mid <= r)
        {
            if (a[m] == 0)
            {
                swap(a[m], a[l]);
                l++;
                m++;
            }
            else if (a[m] == 2)
            {
                swap(a[m], a[r]);
                r--;
            }
            else if (a[m] == 1)
            {
                m++;
            }
        }

        for (int i = 0; i < n; i++)
            cout << a[i] << ' ';
        cout << '\n';
    }
    return 0;
}