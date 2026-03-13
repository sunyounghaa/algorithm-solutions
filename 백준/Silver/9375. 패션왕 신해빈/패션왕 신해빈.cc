#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        map<string, int> mp;

        for (int i = 0; i < n; i++){
            string name, type;
            cin >> name >> type;
            mp[type]++;
        }

        long long res = 1;

        for (const auto &x : mp){
            res *= ((long long)x.second + 1);
        }

        cout << res - 1 << "\n";
    }

}