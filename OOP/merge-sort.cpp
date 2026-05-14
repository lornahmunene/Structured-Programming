#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {

    vector<int> temp; // Temporary vector to hold merged elements

    int i = left;
    // Starting index for right subarray
    int j = mid + 1;
    //

    // Compare elements from both halves
    while (i <= mid && j <= right) {

        if (arr[i] < arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Add remaining elements from left half
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    // Add remaining elements from right half
    while (j <= right) {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy sorted values back into original vector
    for (int k = left; k <= right; k++) {
        arr[k] = temp[k - left];
    }
}

void mergeSort(vector<int>& arr, int left, int right) {

    if (left < right) {

        int mid = (left + right) / 2;

        // Sort left half
        mergeSort(arr, left, mid);

        // Sort right half
        mergeSort(arr, mid + 1, right);

        // Merge both halves
        merge(arr, left, mid, right);
    }
}

int main() {

    vector<int> numbers = {5, 1, 4, 2, 8};

    mergeSort(numbers, 0, numbers.size() - 1);

    cout << "Sorted vector: ";

    for (int num : numbers) {
        cout << num << " ";
    }

    return 0;
}