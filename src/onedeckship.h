#ifndef ONEDECKSHIP_H
#define ONEDECKSHIP_H

#include <constants.h>

#include <ship.h>

class OneDeckShip : public Ship
{
public:
    OneDeckShip();

    ~OneDeckShip();

    bool getIsAlive();

    bool setCoordinates(std::stack<std::pair<int, int>>& coordinates);

    std::vector<std::pair<int, int>> getCoordinates();
};

#endif // ONEDECKSHIP_H
