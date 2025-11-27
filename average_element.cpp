#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> numbers= {1, 2, 3, 4, 7};
    int sum = numbers[0];
    for (int i = 1; i < numbers.size(); i++){
        sum += numbers[i];
    }
    int average = sum / numbers.size();

    cout << "Original Values: ";
    for (int num: numbers){
        cout << num << " ";
    }
    cout << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average is: " << average << endl;

    return 0;
}
