#include <iostream>

using namespace std;

int main() {
    string name = "";
    int age = 0;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Pleased to meet you, "
              << name << "!" << endl;
    cout << "In your next birthday you'll be "
              << age + 1 << " old!" << endl;
}
