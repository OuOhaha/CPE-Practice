#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c, d, L, ans;
    while ((cin >> a >> b >> c >> d >> L) && !(a == 0 && b == 0 && c == 0 && d == 0 && L == 0)) {
        ans = 0;
        for (int x = 0; x <= L; x++) {
            if ((a * x * x + b * x + c) % d == 0) {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}