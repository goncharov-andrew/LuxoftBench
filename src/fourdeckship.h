#ifndef FOURDECKSHIP_H
#define FOURDECKSHIP_H

#include <constants.h>

#include <ship.h>

class FourDeckShip : public Ship
{
public:

    FourDeckShip();

    ~FourDeckShip();

    bool getIsAlive();

    bool setCoordinates(std::stack<std::pair<int, int> >& coordinates);

    void setDeadPart(int x, int y);

    std::vector<std::pair<int, int>> getCoordinates();
};

#endif // FOURDECKSHIP_H
