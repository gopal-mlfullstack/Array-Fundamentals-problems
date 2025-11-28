#include <iostream>
#include <vector>



using namespace std;


vector<int> reverse_array(vector<int>& nums){

    int start = 0;
    int end = nums.size() - 1;

    while (start < end){
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
    return nums;
}






int main(){

    vector<int> nums = {1, 2, 3, 4, 7};
    cout << "Original: ";
    for (int num: nums){
        cout << num << " ";
    }
    cout << endl;
    reverse_array(nums);
    cout << "Reverse Form: ";
    for (int num: nums){
        cout << num << " ";
    }
    cout << endl;





    return 0;
}
