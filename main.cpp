#include <iostream>
#include "Task1.cpp"
#include "Task2.cpp"
#include "Task3.cpp"

int main() {
    int num = 0;
    do {
        std::cout << "\nFor exit enter -1.\n Enter task number: ";
        std::cin >> num;
        switch (num) {
            case 1:
                task1();
                break;
            case 2:
                task2();
                break;
            //case 3:
           //     task3();
            default:
                std::cout << "Wrong number. Try again\n";
        }
    } while (num != -1);
}