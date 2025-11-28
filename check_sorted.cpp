#include <iostream>
#include <vector>
// #include <algorithm>

using namespace std;


bool check_sorted(vector<int>& nums){

    // int j;
    for(int i = 0; i < nums.size()-1; i++) {
        // j= i+1;
        if(nums[i] > nums[i+1]) {
           return false;
        }

    }
    return true;

}




int main(){

    vector<int> nums1 = {1, 4, 89, -8};
    vector<int> nums = {1, 4, 5, 7};
    if(check_sorted(nums) ) {
        cout << "True"<< endl;
    } else {
        cout << "False"<< endl;
    }

    return 0;
}
