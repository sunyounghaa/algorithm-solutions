#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int psum[100002] = {};

    for (int i = 1; i <= n; i++){
        int x;
        cin >> x;
        psum[i] = psum[i - 1] + x;
    }

    int res = psum[k];

    for (int i = k; i <= n; i++){
        res = max(res, psum[i] - psum[i - k]);
    }

    cout << res;
}