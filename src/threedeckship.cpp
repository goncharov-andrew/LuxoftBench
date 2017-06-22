#include "threedeckship.h"

ThreeDeckShip::ThreeDeckShip()
{
    size_ = THREE_DECK_SHIP_SIZE;

    PartOfShip partOfShip;

    parts_.push_back(partOfShip);
    parts_.push_back(partOfShip);
    parts_.push_back(partOfShip);

}

ThreeDeckShip::~ThreeDeckShip()
{

}

bool ThreeDeckShip::getIsAlive()
{
    return Ship::getIsAlive();
}

void ThreeDeckShip::setDeadPart(int x, int y)
{
    Ship::setDeadPart(x, y);
}

bool ThreeDeckShip::setCoordinates(std::stack<std::pair<int, int> >& coordinates)
{
    return Ship::setCoordinates(coordinates);
}

const std::vector<std::pair<int, int> > &ThreeDeckShip::getCoordinates()
{
    return Ship::getCoordinates();
}
