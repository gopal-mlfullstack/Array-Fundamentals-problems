#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> numbers = {1, 3, 4, 7, 84, 3, 7};

    cout << "Array values: ";
    for (int num: numbers){
        cout << num << " ";
    }
    cout << endl;


    return 0;
}
