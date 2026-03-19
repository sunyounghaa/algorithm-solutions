#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int res = 0;
    while(n--){
        string str;
        cin >> str;

        stack<char> stk;
        for(char c : str){
            if (!stk.empty() && stk.top() == c) stk.pop();
            else stk.push(c);
        }
        if (stk.empty()) res++;
    }    

    cout << res;
}