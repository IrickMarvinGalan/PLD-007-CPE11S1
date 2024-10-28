#include <iostream>
#include <cmath>
using namespace std;

// Linear Search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

// Binary Search
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

// Jump Search
int jumpSearch(int arr[], int size, int target) {
    int step = sqrt(size);
    int prev = 0;

    while (arr[min(step, size) - 1] < target) {
        prev = step;
        step += sqrt(size);
        if (prev >= size) return -1;
    }

    for (int i = prev; i < min(step, size); i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

int main() {
    int arr[] = {3, 6, 8, 12, 14, 17, 25, 29, 31, 36, 42, 47};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 25;

    // Linear Search
    int linearResult = linearSearch(arr, size, target);
    cout << "Linear Search: " << (linearResult != -1 ? to_string(linearResult) : "Not found") << endl;

    // Binary Search (works on sorted arrays)
    int binaryResult = binarySearch(arr, 0, size - 1, target);
    cout << "Binary Search: " << (binaryResult != -1 ? to_string(binaryResult) : "Not found") << endl;

    // Jump Search (works on sorted arrays)
    int jumpResult = jumpSearch(arr, size, target);
    cout << "Jump Search: " << (jumpResult != -1 ? to_string(jumpResult) : "Not found") << endl;

    return 0;
}

