#include <bits/stdc++.h>
using namespace std;

int main() {
    int D, K;
    cin >> D >> K;

    int a[31] = {}, b[31] = {};

    a[1] = 1; b[1] = 0;
    a[2] = 0; b[2] = 1;

    for (int i = 3; i <= D; i++) {
        a[i] = a[i - 1] + a[i - 2];
        b[i] = b[i - 1] + b[i - 2];
    }

    for (int A = 1; A <= K; A++) {
        int remain = K - a[D] * A;
        if (remain < 0) break;

        if (remain % b[D] == 0) {
            int B = remain / b[D];
            if (A <= B) {
                cout << A << '\n' << B << '\n';
                break;
            }
        }
    }

    return 0;
}