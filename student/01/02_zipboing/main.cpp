#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    cout << "How many numbers would you like to have? ";
    cin >> num;
    for ( int a = 1; a <= num; ++a) {
        if ( a % 3 == 0 and a % 7 == 0 ) {
            cout << "zip boing" << endl;
        } else if ( a % 3 == 0 ) {
            cout << "zip" << endl;
        } else if ( a % 7 == 0 and a % 7 == 0 ) {
            cout << "boing" << endl;
        } else {
            cout << a << endl;
        }
    }
}
