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
    return 1;
}

int Player::has_won() {
    return 1;
}

void Player::add_points(int pts) {
    pts_ = pts;
}
