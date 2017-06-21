#include "onedeckship.h"

OneDeckShip::OneDeckShip()
{
    size_ = 1;

    parts_.push_back(new PartOfShip);
}

OneDeckShip::~OneDeckShip()
{

}

bool OneDeckShip::getIsAlive()
{
    return Ship::getIsAlive();
}

bool OneDeckShip::setCoordinates(std::stack<std::pair<int, int> > coordinates)
{
    return Ship::setCoordinates(coordinates);
}

std::vector<std::pair<int, int>> OneDeckShip::getCoordinates()
{
    return Ship::getCoordinates();
}
