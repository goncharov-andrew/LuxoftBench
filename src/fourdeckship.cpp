#include "fourdeckship.h"

FourDeckShip::FourDeckShip()
{
    size_ = 4;

    parts_.push_back(new PartOfShip);
    parts_.push_back(new PartOfShip);
    parts_.push_back(new PartOfShip);
    parts_.push_back(new PartOfShip);
}

FourDeckShip::~FourDeckShip()
{

}

bool FourDeckShip::getIsAlive()
{
    return Ship::getIsAlive();
}

bool FourDeckShip::setCoordinates(std::stack<std::pair<int, int> > coordinates)
{
    return Ship::setCoordinates(coordinates);
}

std::vector<std::pair<int, int>> FourDeckShip::getCoordinates()
{
    return Ship::getCoordinates();
}
