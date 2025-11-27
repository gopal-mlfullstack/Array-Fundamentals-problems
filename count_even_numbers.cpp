#include <iostream>
#include <vector>

using namespace std;

int get_total_even(vector<int> nums){
    int count = 0;
    for (int num: nums){
        if (num % 2 == 0){
            count++;
        }
    }
    cout << "Original Values: ";
    for (int num: nums){

        cout << num << " ";
    }
    cout << endl;

    return count;


}


int main(){

    vector<int> nums = {2, 3, 4, 5, 6, 6};
    cout << get_total_even(nums) << endl;




    return 0;
}
