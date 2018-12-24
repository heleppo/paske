#include <iostream>

using namespace std;

void swap(int& num1, int& num2) {
    int num1_temp = num1;
    num1 = num2;
    num2 = num1_temp;
}

int main()
{
    int a = 0;
    int b = 0;
    cout << "Enter an integer: ";
    cin >> a;
    cout << "Enter another integer: ";
    cin >> b;
    swap(a, b);
    cout << "The integers are " << a <<
            " and " << b << endl;
}
