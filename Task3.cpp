#include <iostream>

template<typename T>
void outputArray(T *arr, size_t len) {
    for (int i = 0; i < len / sizeof(T); i++) {
        if (i == len / sizeof(T) - 1)
            std::cout << arr[i] << std::endl;
        else std::cout << arr[i] << ", ";
    }
}

template<typename T>
void swap(T &a, T &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

template<typename T>
void bubbleSort(T *arr, size_t len){
    for (int i = 0; i < len / sizeof(T); i++) {
        for (int j = 0; j < len / sizeof(T) - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

template<typename T>
int getPivotIndex(T *arr, int left, int right) {
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

template<typename T>
void quickSort(T *arr, int left, int right) {
    if (left < right) {
        int pivotIndex = getPivotIndex(arr, left, right);

        quickSort(arr, left, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, 14);
    }
}


void task3() {
    double arr[] = {1.2, 2.3, 1.11, 3.4, 5.5, 5.4, 5.3, 5.1, 1.5, 1.25, 5.41, 5.31, 5.11, 1.51, 1.251};
    outputArray(arr, sizeof(arr));
    //bubbleSort(arr, sizeof(arr));
    quickSort(arr, 0, 14);
    outputArray(arr, sizeof(arr));
}