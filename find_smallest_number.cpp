#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {-1, 1, 3, 65, 00, 12, 999};
    int min = nums[0];

    for (int num: nums){
        if (num < min){
            min = num;
        }
    }
    cout << "Original Values: ";
    for (int num: nums){
        cout << num << " ";
    }
    cout << endl;

    cout << "Min: " << min << endl;


    return 0;
}



