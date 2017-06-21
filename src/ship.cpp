#include "ship.h"

Ship::~Ship()
{
    std::vector<PartOfShip*>:: iterator i;

    for(i = parts_.begin(); i != parts_.end(); ++i)
    {
        delete (*i);
    }

    parts_.clear();
}

bool Ship::getIsAlive()
{
    bool isAlive = false;

    std::vector<PartOfShip*>:: iterator i;

    for(i = parts_.begin(); i != parts_.end(); ++i)
    {
        isAlive = isAlive || (*i)->getIsAlive();
    }

    return isAlive;
}

std::vector<std::pair<int, int>> Ship::getCoordinates()
{
    std::vector<std::pair<int, int>> coordinates;

    std::vector<PartOfShip*>:: iterator i;

    for(i = parts_.begin(); i != parts_.end(); ++i)
    {
        coordinates.push_back((*i)->getCoordinates());
    }

    return coordinates;
}

bool Ship::setCoordinates(std::stack<std::pair<int, int>> coordinates)
{
    if (size_ != coordinates.size())
    {
        return false;
    }
    else
    {
        std::vector<PartOfShip*>:: iterator i;

        for(i = parts_.begin(); i != parts_.end(); ++i)
        {
            (*i)->setCoordinates(coordinates.top());

            coordinates.pop();
        }

        return true;
    }
}
