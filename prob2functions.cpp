#include <iostream>
#include <climits> // For INT_MIN and INT_MAX

using namespace std;

// Function to find min and max using pass by reference
void findMinMax(int arr[], int size, int &minVal, int &maxVal) {
    // Initialize min with the largest possible int and max with the smallest
    minVal = INT_MAX;
    maxVal = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
}

int main() {
    int N;
    // Get array size
    if (!(cin >> N) || N <= 0) return 0;

    int arr[N];
    // Input N space-separated integers
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int minResult, maxResult;
    findMinMax(arr, N, minResult, maxResult);

    // Output Format: Print minimum and maximum value
    cout << minResult << " " << maxResult << endl;

    return 0;
}