#ifndef TWODECKSHIP_H
#define TWODECKSHIP_H

#include "constants.h"

#include "ship.h"

class TwoDeckShip : public Ship
{
public:

    TwoDeckShip();

    ~TwoDeckShip();

    bool getIsAlive();

    bool setCoordinates(std::stack<std::pair<int, int>>& coordinates);

    void setDeadPart(int x, int y);

    const std::vector<std::pair<int, int>>& getCoordinates();
};

#endif // TWODECKSHIP_H
