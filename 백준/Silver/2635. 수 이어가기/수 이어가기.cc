#include <bits/stdc++.h>
using namespace std;

int main() {
    int first;
    cin >> first;

    vector<int> best;

    for (int second = 1; second <= first; second++) {
        vector<int> seq;
        seq.push_back(first);
        seq.push_back(second);

        while (true) {
            int sz = seq.size();
            int next = seq[sz - 2] - seq[sz - 1];

            if (next < 0) break;
            seq.push_back(next);
        }

        if (seq.size() > best.size()) {
            best = seq;
        }
    }

    cout << best.size() << "\n";
    for (int x : best) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}