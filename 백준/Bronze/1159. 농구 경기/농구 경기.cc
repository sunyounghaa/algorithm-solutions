#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt[26] = {};
    string res;

    for (int i = 0; i < n; i++){
        string name;
        cin >> name;
        cnt[name[0] - 'a']++;
    }

    for (int i = 0; i < 26; i++){
        if (cnt[i] >= 5){
            res += char(i + 'a');
        }
    }
    
    if (res.empty()) cout << "PREDAJA";
    else cout << res;
}
