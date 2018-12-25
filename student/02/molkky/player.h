#ifndef PLAYER_H
#define PLAYER_H
#include<iostream>

using namespace std;

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
    int pts_;
};

#endif // PLAYER_H
