#include <iostream>


void outputArray(double *arr, size_t len) {
    for (int i = 0; i < len; i++) {
        if (i == len - 1)
            std::cout << arr[i] << std::endl;
        else std::cout << arr[i] << ", ";
    }
}

void swap(double &a, double &b) {
    if (a == b)
        return;
    a = a + b;
    b = a - b;
    a = a - b;
}

void bubbleSort(double *arr, size_t len){
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

int getPivotIndex(double *arr, int left, int right) {
    int pivot = left - 1;
    for (int i = left; i < right; i++) {
        if (arr[i] < arr[right]) {
            pivot++;
            swap(arr[pivot], arr[i]);
        }
    }

    pivot++;
    swap(arr[pivot], arr[right]);

    return pivot;
}

void quickSort(double *arr, int left, int right) {
    if (left < right) {
        int pivotIndex = getPivotIndex(arr, left, right);

        quickSort(arr, left, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, right);
    }
}


void task3() {
    const int SIZE = 15;
    double arr[SIZE] = {1.2, 2.3, 1.11, 3.4, 5.5, 5.4, 5.3, 5.1,
                        1.5, 1.25, 5.41, 5.31, 5.11, 1.51, 1.251};
    outputArray(arr, SIZE);
    //bubbleSort(arr, sizeof(arr));
    quickSort(arr, 0, SIZE - 1);
    outputArray(arr, SIZE);
}