#include "twodeckship.h"

TwoDeckShip::TwoDeckShip()
{
    size_ = 2;

    parts_.push_back(new PartOfShip);
    parts_.push_back(new PartOfShip);

}

TwoDeckShip::~TwoDeckShip()
{

}

bool TwoDeckShip::getIsAlive()
{
    return Ship::getIsAlive();
}

bool TwoDeckShip::setCoordinates(std::stack<std::pair<int, int> > coordinates)
{
    return Ship::setCoordinates(coordinates);
}

std::vector<std::pair<int, int>> TwoDeckShip::getCoordinates()
{
    return Ship::getCoordinates();
}
