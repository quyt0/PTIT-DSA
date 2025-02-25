#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;
typedef double db;

int n, a[9][9], flag;
string res;
vector<string> v;

void dq(int i, int j)
{
    if (i == n - 1 && j == n - 1)
    {
        flag = 1;
        v.push_back(res);
        return;
    }

    a[i][j] = 0;

    if (i + 1 < n && a[i + 1][j] == 1)
    {
        res += "D";
        a[i + 1][j] = 0;
        dq(i + 1, j);
        a[i + 1][j] = 1;
        res.pop_back();
    }

    if (j + 1 < n && a[i][j + 1] == 1)
    {
        res += "R";
        a[i][j + 1] = 0;
        dq(i, j + 1);
        a[i][j + 1] = 1;
        res.pop_back();
    }

    if (j - 1 >= 0 && a[i][j - 1] == 1)
    {
        res += "L";
        a[i][j - 1] = 0;
        dq(i, j - 1);
        a[i][j - 1] = 1;
        res.pop_back();
    }

    if (i - 1 >= 0 && a[i - 1][j] == 1)
    {
        res += "U";
        a[i - 1][j] = 0;
        dq(i - 1, j);
        a[i - 1][j] = 1;
        res.pop_back();
    }
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
        }
        if (a[0][0] == 0)
        {
            cout << -1 << '\n';
            continue;
        }
        dq(0, 0);
        if (flag == 0)
        {
            cout << -1 << '\n';
            continue;
        }
        sort(v.begin(), v.end());
        for (string i : v)
        {
            cout << i << ' ';
        }
        cout << '\n';
        v.clear();
        res.clear();
        flag = 0;
    }
    return 0;
}