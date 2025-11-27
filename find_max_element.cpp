#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 3, 65, 00, 12, 999};
    int max = nums[0];

    for (int num: nums){
        if (num > max){
            max = num;
        }
    }
    cout << "Original Values: ";
    for (int num: nums){
        cout << num << " ";
    }
    cout << endl;

    cout << "Max: " << max << endl;


    return 0;
}



