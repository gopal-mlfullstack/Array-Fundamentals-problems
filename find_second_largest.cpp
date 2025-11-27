#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int get_second_largest(vector<int> nums){

    int max = INT_MIN;
    int second = INT_MIN;

    for (int num: nums){
        if (num > max){
            second = max;
            max = num;
        }
        else {
            if ((max > num) && (second < num)){
                second = num;
            }
        }
    }
    return second;




}



int main(){

    vector<int> nums = {1, 2, 3, 4, 5};
    cout << "Original Values: ";
    for (int num: nums){

        cout << num << " ";
    }
    cout << endl;
    cout << "Second max: " << get_second_largest(nums) << endl;


    return 0;
}
