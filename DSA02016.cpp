#include <bits/stdc++.h>
using namespace std;

int n, a[11], ok;

void ktao() {
    ok = 0;
    for (int i = 1; i <= n; i++)
        a[i] = i;
}

void sinh() {
    int i = n - 1;
    while (i >= 1 && a[i] > a[i+1])
        i--;
    if (i == 0)
        ok = 1;
    else {
        int j = n;
        while (a[j] < a[i])
            j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

bool isValid() {
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (abs(a[i] - a[j]) == abs(i - j)) 
                return false;
        }
    }
    return true;
}

void in() {
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        ktao();
        int res = 0;
        while (!ok) {
            if (isValid())
            {
                //in();
                res++;
            }
            sinh();
        }
        cout << res << '\n';
    }
}