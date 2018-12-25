#ifndef PLAYER_H
#define PLAYER_H
#include<iostream>

using namespace std;
//haista vittu

class Player
{
public:
    Player(string name);
    string get_name() const;
    int get_points() const;
    int has_won();
    void add_points(int pts);
private:
    string name_;
    int pts_ = 0;
};

#endif // PLAYER_H
