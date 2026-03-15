#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    int cnt[26] = {};
    for (char c : str) {
        cnt[c - 'A']++;
    }

    int oddCnt = 0;
    char mid = 0;

    for (int i = 0; i < 26; i++) {
        if (cnt[i] % 2 == 1) {
            oddCnt++;
            mid = char(i + 'A');
        }
    }

    if (oddCnt > 1) {
        cout << "I'm Sorry Hansoo\n";
        return 0;
    }

    string left = "";
    for (int i = 0; i < 26; i++) {
        left += string(cnt[i] / 2, char(i + 'A'));
    }

    string right = left;
    reverse(right.begin(), right.end());

    if (mid) cout << left << mid << right << "\n";
    else cout << left << right << "\n";
}