#include "player.h"
#include <iostream>

using namespace std;

Player::Player(string name):
    name_(name) {

}

string Player::get_name() const {
    return name_;
}

int Player::get_points() const {
    return pts_;
}

int Player::has_won() {
    if (pts_ == 50) {
        return 1;
    }
    return 0;
}

void Player::add_points(int pts) {
    pts_ += pts;
    if (pts_ > 50) {
        pts_ = 25;
        cout << name_ << " gets penalty points!"
             << endl;
    }
}
