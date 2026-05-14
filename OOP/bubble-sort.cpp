// #include <iostream>
// using namespace std;

// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void bubbleSort(int arr[], int n) {

//     for (int i = 0; i < n - 1; i++) {

//         cout << "\nPASS " << i + 1 << endl;

//         for (int j = 0; j < n - i - 1; j++) {

//             cout << "Compare "
//                  << arr[j] << " and "
//                  << arr[j + 1] << endl;

//             if (arr[j] > arr[j + 1]) {

//                 // swap
//                 int temp = arr[j];
//                 // Swapping the elements
//                 arr[j] = arr[j + 1];
//                 //
//                 arr[j + 1] = temp;

//                 cout << "Swapped: ";
//                 printArray(arr, n);

//             } else {

//                 cout << "No swap: ";
//                 printArray(arr, n);
//             }
//         }
//     }
// }

// int main() {

//     int arr[] = {5, 1, 4, 2};
//     int n = 4;

//     cout << "Original array: ";
//     printArray(arr, n);

//     bubbleSort(arr, n);

//     cout << "\nSorted array: ";
//     printArray(arr, n);

//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;
vector<int> numbers;

int bubbleSort(vector<int>& numbers) {
    for (int i = 0; i < numbers.size() - 1; i++) {
        cout<< "\n Go through the array and compare adjacent elements: " << endl;

        for (int j = 0; j < numbers.size() - i - 1; j++) {
                cout << "Compare " << numbers[j] << " and " << numbers[j + 1] << endl;

            if (numbers[j] > numbers[j + 1]) {
                    cout << "If the first element is greater than the second, swap them: " << endl;

                swap(numbers[j], numbers[j + 1]);
                cout << "Swapped: " << endl;

            }
        }
    }
    return 0;
}

int main() {
    numbers = {5, 1, 4, 2};

    cout << "Original array: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    bubbleSort(numbers);

    cout << "\nSorted array: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}