#ifndef THREEDECKSHIP_H
#define THREEDECKSHIP_H

#include "constants.h"

#include "ship.h"

class ThreeDeckShip : public Ship
{
public:

    ThreeDeckShip();

    ~ThreeDeckShip();

    bool getIsAlive();

    bool setCoordinates(std::stack<std::pair<int, int>>& coordinates);

    void setDeadPart(int x, int y);

    const std::vector<std::pair<int, int>>& getCoordinates();
};

#endif // THREEDECKSHIP_H
