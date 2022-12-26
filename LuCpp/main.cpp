//
//  main.cpp
//  LuCpp
//
//  Created by Marcelo Sampaio on 21/12/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    // 📍 variables
    int a = 0;
    float b = 3.5;
    char c = 'X';
    bool d = true;
    
    
    std::cout << a << "\n";
    std::cout << b << "\n";
    std::cout << c << "\n";
    
    if (d) {
        std::cout << true << "\n";
    } else {
        std::cout << false << "\n";
    }
    // ----------------------


    // 📍 data entry
    short int value;
    std::cout << "\n";
    std::cout << "Enter a value: ";
    std::cin >> value;
    
    char name[30];
    std::cout << "\n";
    std::cout << "Enter the name: ";
    std::cin >> name;
    

    std::cout << "Value: " << value << "\n";
    std::cout << "Name: " << name << "\n";
    // -------------------
    
    
    // 📍 For Loop
    int j;
    for (j = 0; j<value; j++) {
        std::cout << "      .... loop: " << name << j << "\n";
    }
    
    
    
    
    return 0;
}
