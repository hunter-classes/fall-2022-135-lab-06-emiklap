#include <iostream>

int main() {
    std::string str = "";

    std::cout << "Input: ";
    getline(std::cin, str);


    for (int i = 0; i < str.length(); i++) {
        std::cout << str[i] << " " << (int)str[i] << std::endl;
    }
}
