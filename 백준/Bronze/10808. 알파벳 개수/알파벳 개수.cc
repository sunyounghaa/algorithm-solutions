#include <bits/stdc++.h>
using namespace std;

int main() {
    string words;
    cin >> words;

    int cnt[26] = {};

    for (char c : words){
        cnt[c - 'a']++;
    }

    for (int x : cnt) cout << x << ' '; 
}
