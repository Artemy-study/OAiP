#include <iostream>

using namespace std;

int main() {
    int size = 37, nums = 0, result = 0;
//    cout << "write size of stroke " << endl;
//    cin>>size;
//    char stroke[size];
//    for (int i = 0; i < size; ++i) {
//        cin >> stroke[i];
//    }
    char stroke[size] = {'1', '0', '1', ' ', '0', '1', ' ', ' ', '1', '0', '1', '0', '0', ' ', '0', ' ', '0', '1', '1', '0', '1', ' ', '0', '1', '1', '1', '1', '1', '0', ' ', '1', '0', '1', '1', '0', ' ', '0'};
    for (int i = 0; i < size; ++i) {
        if (stroke[i] != ' ')nums++;
        else {
            if (nums == 5) result++;
            nums = 0;
        }
    }
    cout << "result = " << result;
    return 0;
}