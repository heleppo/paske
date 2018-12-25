#include <iostream>
#include <thread>
#include "koira.cpp"

using namespace std;

int main() {
    unsigned long k;
    string str="RISTUKSEN VITTU MOON PÖHÖNÄS!"
               "HAISTA KOIRA VITTU!";
    for (k = 0; k < str.size(); ++k) {
        if (k < 31) {
            cout << str[k];
        } else {
            cout << str[k] << endl;
            }
        this_thread::sleep_for(chrono::milliseconds(50));
    }

    cout << "Hello World!" << endl;
    cout << koira();
    return 0;
}
