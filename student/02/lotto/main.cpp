#include <iostream>
#include <deque>

using namespace std;

int factorial(int num) {
    if ( num == 0 ) {
        return 1;
    } else {
        int f = num;
        for ( int a = 1; a < num; a++) {
            f *= a;
        }
        return f;
    }
}


int chance(int n, int p) {
    return 0;
}

int main()
{

}
