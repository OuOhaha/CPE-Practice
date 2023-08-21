#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int T, N;
    char Nc1, Nc2;
    bool ans;
    cin >> T;
    for (int x = 1; x <= T; x++) {
        ans = true;
        cin >> Nc1 >> Nc2 >> N;
        vector<vector<long long>> M(N, vector<long long>(N));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> M[i][j];
            }
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (M[i][j] != M[N - 1 - i][N - 1 - j] || M[i][j] < 0 || M[N - 1 - i][N - 1 - j] < 0) {
                    ans = false;
                }
            }
        }
        if (ans == true) {
            cout << "Test #" << x << ": Symmetric." << endl;
        }
        else {
            cout << "Test #" << x << ": Non-symmetric." << endl;
        }
    }
    return 0;
}