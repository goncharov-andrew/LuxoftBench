#include "partofship.h"

PartOfShip::PartOfShip()
{
    isAlive_ = true;

    coordinates_.first = -1;
    coordinates_.second = -1;
}

const std::pair<int, int>& PartOfShip::getCoordinates()
{
    return coordinates_;
}

void PartOfShip::setCoordinates(const std::pair<int, int> coordinates)
{
    coordinates_ = coordinates;
}

bool PartOfShip::getIsAlive()
{
    return isAlive_;
}

void PartOfShip::setIsAlive(bool isAlive)
{
    isAlive_ = isAlive;
}
