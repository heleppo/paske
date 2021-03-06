#include <iostream>
#include <string>
#include <deque>

using namespace std;

int checkaz(string key) {
    for (string::size_type a = 0;
         a < key.length(); ++a) {
        if (not islower(key[a])) {
            return 1;
        } else if (key[a] < 97 or key[a] > 122) {
            return 1;
        }
    }
    return 0;
}

int checkall(string key) {
    deque<char> az = {};
    for (char i = 97; i < 123; ++i) {
        az.push_back(i);
    }
    for (string::size_type a = 0;
         a < key.length(); ++a) {
        if (key.find(az[a]) == string::npos) {
            return 1;
        }
    }
    return 0;
}

string change(string key, string text) {
    string enc = text;
    for (string::size_type a = 0;
         a < key.length(); ++a) {
        unsigned int cur = 97 + a;
        for (string::size_type i = 0;
            i < text.length(); ++i) {
            if (text[i] == static_cast<char>(cur)) {
                string c;
                c = key[a];
                enc.replace(i, 1, c);
            }
        }
    }
    return enc;
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
    } else if (checkall(key)) {
        cout << "Error! The encryption key "
                "must contain all alphabets "
                "a-z." << endl;
        return 1;
    }
    string text = "";
    cout << "Enter the text to be encrypted: ";
    cin >> text;
    if (checkaz(text)) {
        cout << "Error! The encryption key must "
                "contain only lower case characters."
             << endl;
        return 1;
    }
    cout << change(key, text) << endl;
}
