#include <iostream>
#include <deque>

using namespace std;

long long int factorial(int num) {
    if ( num == 0 ) {
        return 1;
    } else {
        long long int f = num;
        for (int a = 2; a < num; a++) {
            f *= a;
        }
        return f;
    }
}

long long int chance(int n, int p) {
    return factorial(n) / (factorial(n - p) *
                           factorial(p));
}

int main() {
//    int total = 0;
//    int drawn = 0;
//    cout << "Enter the total number of lottery balls: ";
//    cin >> total;
//    cout << "Enter the number of the drawn balls: ";
//    cin >> drawn;
//    cout << "The probability of guessing all 4 balls "
//            "correctly is 1/" << chance(total, drawn)
//         << endl;
    cout << factorial(20);
}
