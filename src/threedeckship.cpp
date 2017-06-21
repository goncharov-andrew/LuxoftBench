#include "threedeckship.h"

ThreeDeckShip::ThreeDeckShip()
{
    size_ = 3;

    parts_.push_back(new PartOfShip);
    parts_.push_back(new PartOfShip);
    parts_.push_back(new PartOfShip);

}

ThreeDeckShip::~ThreeDeckShip()
{

}

bool ThreeDeckShip::getIsAlive()
{
    return Ship::getIsAlive();
}

bool ThreeDeckShip::setCoordinates(std::stack<std::pair<int, int> > coordinates)
{
    return Ship::setCoordinates(coordinates);
}

std::vector<std::pair<int, int>> ThreeDeckShip::getCoordinates()
{
    return Ship::getCoordinates();
}
