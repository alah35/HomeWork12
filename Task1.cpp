#include <iostream>
#include <string>



void task1() {
    std::string tenants[10];

    for (int i = 0; i < 10; i++) {
        std::cout << "Who live in " << i << " flat? ";
        std::cin >> tenants[i];
    }

    for (int i = 0; i < 3; i++) {
        int num;
        std::cout << "Enter the flat number: ";
        std::cin >> num;
        if ( num < 0 || num > 9)
            std::cout << "There is no this flat number!\n";
        else
            std::cout << tenants[num] << " lives here!\n";
    }
} 