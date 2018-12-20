#include <iostream>
#include <thread>


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

    cout << "Hellaaaaaao World!" << endl;
    return 0;
}
