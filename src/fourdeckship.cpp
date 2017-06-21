#include "fourdeckship.h"

FourDeckShip::FourDeckShip()
{
    size_ = FOUR_DECK_SHIP_SIZE;

    PartOfShip partOfShip;

    parts_.push_back(partOfShip);
    parts_.push_back(partOfShip);
    parts_.push_back(partOfShip);
    parts_.push_back(partOfShip);
}

FourDeckShip::~FourDeckShip()
{

}

bool FourDeckShip::getIsAlive()
{
    return Ship::getIsAlive();
}

void FourDeckShip::setDeadPart(int x, int y)
{
    Ship::setDeadPart(x, y);
}

bool FourDeckShip::setCoordinates(std::stack<std::pair<int, int> >& coordinates)
{
    return Ship::setCoordinates(coordinates);
}

std::vector<std::pair<int, int> > FourDeckShip::getCoordinates()
{
    return Ship::getCoordinates();
}
