#include <iostream>
#include <string>
#include <deque>

using namespace std;

int checkaz(string key) {
    deque<char> az = {};
    for (char i = 97; i < 123; ++i) {
        az.push_back(i);
    }
    for (string::size_type a = 0;
         a < key.length(); ++a) {
        if (not islower(key[a])) {
            return 1;
        } else if (key[a] < 97 or key[a] > 122) {
            return 1;
        } else if (key.find(az[a]) ==
                   string::npos) {
            cout << "Error! The encryption key "
                    "must contain all alphabets "
                    "a-z." << endl;
            return 0;
        }
    }
    return 0;
}

int main() {
    string key = "";
    cout << "Enter the encryption key: ";
    cin >> key;
    if (key.length() != 26) {
        cout << "Error! The encryption key must "
                "contain 26 characters." << endl;
        return 1;
    } else if (checkaz(key)) {
        cout << "Error! The encryption key must "
                "contain only lower case characters."
             << endl;
        return 1;
    }
}
