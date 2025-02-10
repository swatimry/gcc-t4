#include <iostream>

int main() {
    std::cout << "Hello, World! Printing diamond pattern" << std::endl;
     int n = 5; 

    
    for (int i = 1; i <= n; i += 2) {
        for (int j = 0; j < (n - i) / 2; j++)
            std::cout << " ";
        for (int j = 0; j < i; j++)
            std::cout << "*";
        std::cout << std::endl;
    }

   
    for (int i = n - 2; i >= 1; i -= 2) {
        for (int j = 0; j < (n - i) / 2; j++)
            std::cout << " ";
        for (int j = 0; j < i; j++)
            std::cout << "*";
        std::cout << std::endl;
    }

    return 0;
}
