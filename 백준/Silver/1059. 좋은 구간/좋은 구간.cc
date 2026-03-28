#include <bits/stdc++.h>
using namespace std;

int main() {
    int L;
    cin >> L;

    vector<int> S(L);
    for (int i = 0; i < L; i++) cin >> S[i];

    int n;
    cin >> n;

    sort(S.begin(), S.end());

    for (int x : S) {
        if (x == n) {
            cout << 0 << '\n';
            return 0;
        }
    }

    int left = 0;
    int right = 0;

    for (int i = 0; i < L; i++) {
        if (S[i] < n) left = S[i];
        if (S[i] > n) {
            right = S[i];
            break;
        }
    }

    int ans = (n - left) * (right - n) - 1;
    cout << ans << '\n';

    return 0;
}