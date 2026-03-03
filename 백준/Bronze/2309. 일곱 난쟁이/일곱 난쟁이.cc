#include <bits/stdc++.h>
using namespace std;
int main(){
    int num = 0;
    int nums[9];
    int sum = 0;
    for(int i = 0; i < 9; i++){
        cin >> num;
        nums[i] = num;
        sum += num;
    }

    int overnum = sum - 100;

    int j, k = 0;
    bool find = false;
    for(j= 0; j < 9; j++){
        for(k = j + 1; k < 9; k++){
            if (nums[j] + nums[k] == overnum){
                find = true;
                break;
            }
        }
        if(find) break;
    }

    int new_nums[7];
    int new_i = 0;
    for (int i = 0; i < 9; i++){
        if (i != j && i != k){
            new_nums[new_i] = nums[i];
            new_i++;
        }
    }

    sort(new_nums, new_nums+7);

    for(int i = 0; i < 7; i++){
        cout << new_nums[i] << '\n';
    }

    return 0;
}