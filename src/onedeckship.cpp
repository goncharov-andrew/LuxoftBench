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

void OneDeckShip::setDeadPart(int x, int y)
{
    Ship::setDeadPart(x, y);
}

bool OneDeckShip::setCoordinates(std::stack<std::pair<int, int> >& coordinates)
{
    return Ship::setCoordinates(coordinates);
}

const std::vector<std::pair<int, int> >& OneDeckShip::getCoordinates()
{
    return Ship::getCoordinates();
}
