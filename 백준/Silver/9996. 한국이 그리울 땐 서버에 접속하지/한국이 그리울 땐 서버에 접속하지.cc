#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string pattern;
    cin >> pattern;
    
    int pos = pattern.find('*');
    string pre = pattern.substr(0, pos);
    string suf = pattern.substr(pos + 1);
    
    while (n--){
        string s;
        cin >> s;

        if (s.size() < pre.size() + suf.size()){
            cout << "NE\n";
            continue;
        }

        if (s.substr(0, pre.size()) == pre && 
            s.substr(s.size() - suf.size()) == suf){
                cout << "DA\n";
            }
        else cout << "NE\n";
    }
}