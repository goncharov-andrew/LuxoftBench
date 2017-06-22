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

    virtual const std::vector<std::pair<int, int> >& getCoordinates() = 0;

    virtual void setDeadPart(int x, int y) = 0;

protected:

   std::vector<PartOfShip> parts_;

   std::vector<std::pair<int, int>> coordinates_;

   int size_;
};

#endif // SHIP_H
