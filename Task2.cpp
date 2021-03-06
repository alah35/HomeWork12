#include <iostream>

template <typename T>
void inputArray( T *arr, size_t len) {
    for (int i = 0; i < len; i++) {
        std::cout << "Enter " << i << " element: ";
        std::cin >> arr[i];
    }
}

template <typename T>
T getRepeatingNumber(T *arr, size_t len) {
    T x = arr[0], sum = 0;
    for (int i = 0; i < len / sizeof(T); i++) {
        if (arr[i] < x)
            x = arr[i];
        sum += arr[i];
    }

    T repNum = sum - (14 * x + 91);
    return repNum;
}

void task2(){
    const int SIZE = 15;
//    int numbers[SIZE] = {114, 111, 106, 107, 105, 108, 115, 108, 110, 109,
//                         112, 113, 116, 117, 118};

    double numbers[SIZE];

    inputArray(numbers,SIZE);

    std::cout << "Repeating num = " << getRepeatingNumber(numbers, SIZE);
}
