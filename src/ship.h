#ifndef SHIP_H
#define SHIP_H

#include <partofship.h>


#include <stack>
#include <vector>

class Ship
{
public:

    virtual ~Ship();

    virtual bool getIsAlive() = 0;

    virtual bool setCoordinates(std::stack<std::pair<int, int> > &coordinates) = 0;

    virtual std::vector<std::pair<int, int> > getCoordinates() = 0;

protected:

   std::vector<PartOfShip> parts_;

   int size_;
};

#endif // SHIP_H
