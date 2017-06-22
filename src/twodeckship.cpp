#include "twodeckship.h"

TwoDeckShip::TwoDeckShip()
{
    size_ = TWO_DECK_SHIP_SIZE;

    PartOfShip partOfShip;

    parts_.push_back(partOfShip);
    parts_.push_back(partOfShip);

}

TwoDeckShip::~TwoDeckShip()
{

}

bool TwoDeckShip::getIsAlive()
{
    return Ship::getIsAlive();
}

void TwoDeckShip::setDeadPart(int x, int y)
{
    Ship::setDeadPart(x, y);
}

bool TwoDeckShip::setCoordinates(std::stack<std::pair<int, int> >& coordinates)
{
    return Ship::setCoordinates(coordinates);
}

const std::vector<std::pair<int, int> >& TwoDeckShip::getCoordinates()
{
    return Ship::getCoordinates();
}
