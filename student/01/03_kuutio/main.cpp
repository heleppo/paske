#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num = 0;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The cube of " << num << "is "
         << pow(num, 3) << ".";
}
