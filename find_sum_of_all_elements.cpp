#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int> nums = {-1, -2, 5, 2, 6};
    int sum = nums[0];
    for (int i = 1; i < nums.size(); i++){
        sum += nums[i];
    }
    cout << "Original Values: ";
    for (int num: nums){
        cout << num << " ";
    }
    cout << endl;

    cout << "Sum of all elements: " << sum << endl;

    return 0;
}
