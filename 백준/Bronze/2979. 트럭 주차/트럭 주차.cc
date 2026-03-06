#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int times[101] = {};

    for (int i = 0; i < 3; i++){
        int start, end;
        cin >> start >> end;
        for (int t = start; t < end; t++){
            times[t]++;
        }
    }

    int result = 0;
    for (int t = 0; t <= 100; t++){
        if (times[t] == 1) result += A;
        else if (times[t] == 2) result += 2 * B;
        else if (times[t] == 3) result += 3 * C;
    }
    cout << result;
}
