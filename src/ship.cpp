#include "ship.h"

Ship::~Ship()
{
    parts_.clear();
}

bool Ship::getIsAlive()
{
    bool isAlive = false;

    std::vector<PartOfShip>:: iterator i;

    for(i = parts_.begin(); i != parts_.end(); ++i)
    {
        isAlive = isAlive || (*i).getIsAlive();
    }

    return isAlive;
}

void Ship::setDeadPart(int x, int y)
{
    std::vector<PartOfShip>:: iterator i;

    for(i = parts_.begin(); i != parts_.end(); ++i)
    {
        std::pair<int, int>coordinates = (*i).getCoordinates();

        if(x == coordinates.first && y == coordinates.second)
        {
            (*i).setIsAlive(false);

            break;
        }
    }
}

const std::vector<std::pair<int, int> > &Ship::getCoordinates()
{
    return coordinates_;
}

bool Ship::setCoordinates(std::stack<std::pair<int, int> >& coordinates)
{
    if (size_ != coordinates.size())
    {
        return false;
    }
    else
    {
        coordinates_.clear();

        std::vector<PartOfShip>:: iterator i;

        for(i = parts_.begin(); i != parts_.end(); ++i)
        {
            (*i).setCoordinates(coordinates.top());

            coordinates_.push_back(coordinates.top());

            coordinates.pop();
        }

        return true;
    }
}
