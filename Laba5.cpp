#include <iostream>
#include <time.h>
using namespace std;

int main() {
    srand(time(0));
    int size, prob;
    cout << "write lens of array" << endl;
    cin >> size;
    int *arr = new int[size];
    cout << "write '0' to write aray, or other to random" << endl;
    cin >> prob;
    if (!prob) {
        cout << "Write array";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    } else {
        for (int j = 0; j < size; j++) {
            arr[j] = rand() % 100;
            cout << arr[j] << " ";
        }
    }
    int min1, max1, indmin = 0, indmax = 0;
    min1 = arr[0], max1 = arr[0];
    for (int k = 1; k < size; k++) {
        if (arr[k] >= max1) {
            max1 = arr[k];
            indmax = k;
        }
        if (arr[k] <= min1) {
            min1 = arr[k];
            indmin = k;
        }
    }
    double RES = 1;
    for (int g = min(indmin, indmax) + 1; g < max(indmax, indmin); g++) {
        RES *= (arr[g]);
    }
    cout << endl << "result = " << RES;
    cin >> prob;
}