#include <iostream>
#include <vector>

using namespace std;

void printVector(const vector<int>& arr) {
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;

    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}
int main() {
    vector<int> data = {64, 34, 25, 12, 22, 11, 90};
    cout << "Original array: ";
    printVector(data);
    bubbleSort(data);
    cout << "Sorted array: ";
    printVector(data);

    return 0;
}