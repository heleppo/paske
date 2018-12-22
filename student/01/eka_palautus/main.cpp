#include <iostream>

int main() {
    std::string name = "";
    int age = 0;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << std::endl << "Enter your age: ";
    std::cin >> age;
    std::cout << std::endl << "Pleased to meet you, "
              << name << "!" << std::endl;
    std::cout << "In your next birthday you'll be "
              << age + 1 << " old!" << std::endl;
}
