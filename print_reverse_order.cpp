#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){

    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "Original Values: ";
    for (int num: numbers){
        cout << num << " ";
    }
    cout << endl;

    reverse(numbers.begin(), numbers.end());

    cout << "Reverse Form: ";
    for (int num: numbers){
        cout << num << " ";
    }
    cout << endl;




    return 0;
}
