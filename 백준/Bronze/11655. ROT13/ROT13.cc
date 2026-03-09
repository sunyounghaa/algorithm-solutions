#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    for (char &c : str){
        if ('a' <= c && c <= 'z') c = 'a' + (c - 'a' + 13) % 26;
        else if ('A' <= c && c <= 'Z') c = 'A' + (c - 'A' + 13) % 26;
    }

    cout << str;
}