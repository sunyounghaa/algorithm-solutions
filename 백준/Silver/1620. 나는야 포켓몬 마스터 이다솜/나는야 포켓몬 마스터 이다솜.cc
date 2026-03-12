#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    string str;
    map<string, int> mp;
    map<int, string> mp2;

    for (int i = 0; i < n; i++){
        cin >> str;
        mp[str] = i + 1;
        mp2[i + 1] = str;
    }

    for (int i = 0; i < m ; i++){
        cin >> str;
        if (atoi(str.c_str()) == 0){
            cout << mp[str] << "\n";
        }
        else cout << mp2[atoi(str.c_str())] << "\n";
    }
}