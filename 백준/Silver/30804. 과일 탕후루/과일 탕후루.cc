#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> fruit(N);
    for (int i = 0; i < N; i++) cin >> fruit[i];

    int cnt[10] = {};
    int kind = 0;
    int left = 0;
    int ans = 0;

    for (int right = 0; right < N; right++) {
        if (cnt[fruit[right]] == 0) kind++;
        cnt[fruit[right]]++;

        while (kind > 2) {
            cnt[fruit[left]]--;
            if (cnt[fruit[left]] == 0) kind--;
            left++;
        }

        ans = max(ans, right - left + 1);
    }

    cout << ans << '\n';
    return 0;
}