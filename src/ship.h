#ifndef SHIP_H
#define SHIP_H

#include <partofship.h>
#include <stack>
#include <vector>

class Ship
{
protected:

   std::vector<PartOfShip*> parts_;

   int size_;

public:

    virtual ~Ship() = 0;

    virtual bool getIsAlive() = 0;

    virtual bool setCoordinates(std::stack<std::pair<int, int>> coordinates) = 0;

    virtual std::vector<std::pair<int, int>> getCoordinates() = 0;
};

#endif // SHIP_H
