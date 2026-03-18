#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n);
    for (int &x : a) cin >> x;

    sort(a.begin(), a.end());

    int l = 0, r = n - 1;
    int res = 0;

    while(l < r){
        int sum = a[l] + a[r];

        if (sum == m) {
            res++; l++; r--;
        }
        else if (sum < m) l++;
        else r--;
    }

    cout << res << "\n";
}