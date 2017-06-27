#ifndef ONEDECKSHIP_H
#define ONEDECKSHIP_H

#include "constants.h"

#include "ship.h"

class OneDeckShip : public Ship
{
public:
    OneDeckShip();

    ~OneDeckShip();

    bool getIsAlive();

    bool setCoordinates(std::stack<std::pair<int, int>>& coordinates);

    void setDeadPart(int x, int y);

    const std::vector<std::pair<int, int>>& getCoordinates();
};

#endif // ONEDECKSHIP_H
