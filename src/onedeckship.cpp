#include "onedeckship.h"

OneDeckShip::OneDeckShip()
{
    size_ = ONE_DECK_SHIP_SIZE;

    PartOfShip partOfShip;

    parts_.push_back(partOfShip);
}

OneDeckShip::~OneDeckShip()
{

}

bool OneDeckShip::getIsAlive()
{
    return Ship::getIsAlive();
}

bool OneDeckShip::setCoordinates(std::stack<std::pair<int, int> >& coordinates)
{
    return Ship::setCoordinates(coordinates);
}

std::vector<std::pair<int, int> > OneDeckShip::getCoordinates()
{
    return Ship::getCoordinates();
}
