#ifndef TWODECKSHIP_H
#define TWODECKSHIP_H

#include "ship.h"

class TwoDeckShip : public Ship
{
public:

    TwoDeckShip();

    ~TwoDeckShip();

    bool getIsAlive();

    bool setCoordinates(std::stack<std::pair<int, int>> coordinates);

    std::vector<std::pair<int, int>> getCoordinates();
};

#endif // TWODECKSHIP_H
