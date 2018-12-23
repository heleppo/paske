#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> sto = {};
    sto.at(3) = 100;
    cout << sto.at(3);
}
