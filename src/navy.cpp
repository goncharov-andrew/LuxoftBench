#include "navy.h"

Navy::Navy()
{

}

Navy::Navy(std::vector<OneDeckShip> oneDeckShips,
           std::vector<TwoDeckShip> twoDeckShips,
           std::vector<ThreeDeckShip> threeDeckShips,
           std::vector<FourDeckShip> fourDeckShips)
{
    oneDeckShips_ = oneDeckShips;
    twoDeckShips_ = twoDeckShips;
    threeDeckShips_ = threeDeckShips;
    fourDeckShips_ = fourDeckShips;
}

Navy& Navy::operator=(const Navy& right)
{
     if (this == &right)
     {
        return *this;
     }

     this->oneDeckShips_ = right.oneDeckShips_;
     this->twoDeckShips_ = right.twoDeckShips_;
     this->threeDeckShips_ = right.threeDeckShips_;
     this->fourDeckShips_ = right.fourDeckShips_;

     return *this;
}

int Navy::getNumberOfAliveShips()
{
    int numberOfAliveShips = 0;


    std::vector<OneDeckShip>::iterator oneDeckIter;

    std::vector<TwoDeckShip>::iterator twoDeckIter;

    std::vector<ThreeDeckShip>::iterator threeDeckIter;

    std::vector<FourDeckShip>::iterator fourDeckIter;


    for (oneDeckIter = Navy::oneDeckShips_.begin(); oneDeckIter != Navy::oneDeckShips_.end(); ++oneDeckIter)
    {
        if( (*oneDeckIter).getIsAlive() == true )
        {
            numberOfAliveShips = numberOfAliveShips + 1;
        }
    }

    for (twoDeckIter = Navy::twoDeckShips_.begin(); twoDeckIter != Navy::twoDeckShips_.end(); ++twoDeckIter)
    {
        if( (*twoDeckIter).getIsAlive() == true )
        {
            numberOfAliveShips = numberOfAliveShips + 1;
        }
    }

    for (threeDeckIter = Navy::threeDeckShips_.begin(); threeDeckIter != Navy::threeDeckShips_.end(); ++threeDeckIter)
    {
        if( (*threeDeckIter).getIsAlive() == true )
        {
            numberOfAliveShips = numberOfAliveShips + 1;
        }
    }

    for (fourDeckIter = Navy::fourDeckShips_.begin(); fourDeckIter != Navy::fourDeckShips_.end(); ++fourDeckIter)
    {
        if( (*fourDeckIter).getIsAlive() == true )
        {
            numberOfAliveShips = numberOfAliveShips + 1;
        }
    }

    return numberOfAliveShips;
}

int Navy::getNumberOfDeadShips()
{
    int numberOfDeadShips = NUMBER_OF_SHIPS - getNumberOfAliveShips();

    return numberOfDeadShips;
}

std::vector<std::pair<int, int>> Navy::getNavyCoordinates()
{
    std::vector<std::pair<int, int>> navyCoordinates;

    std::vector<std::pair<int, int>> coordinatesOfCurrentShip;

    std::vector<OneDeckShip>::iterator oneDeckIter;

    std::vector<TwoDeckShip>::iterator twoDeckIter;

    std::vector<ThreeDeckShip>::iterator threeDeckIter;

    std::vector<FourDeckShip>::iterator fourDeckIter;


    for (oneDeckIter = Navy::oneDeckShips_.begin(); oneDeckIter != Navy::oneDeckShips_.end(); ++oneDeckIter)
    {
        coordinatesOfCurrentShip = (*oneDeckIter).getCoordinates();

        navyCoordinates.insert( navyCoordinates.end(), coordinatesOfCurrentShip.begin(), coordinatesOfCurrentShip.end() );

        coordinatesOfCurrentShip.clear();
    }

    for (twoDeckIter = Navy::twoDeckShips_.begin(); twoDeckIter != Navy::twoDeckShips_.end(); ++twoDeckIter)
    {
        coordinatesOfCurrentShip = (*twoDeckIter).getCoordinates();

        navyCoordinates.insert( navyCoordinates.end(), coordinatesOfCurrentShip.begin(), coordinatesOfCurrentShip.end() );

        coordinatesOfCurrentShip.clear();
    }

    for (threeDeckIter = Navy::threeDeckShips_.begin(); threeDeckIter != Navy::threeDeckShips_.end(); ++threeDeckIter)
    {
        coordinatesOfCurrentShip = (*threeDeckIter).getCoordinates();

        navyCoordinates.insert( navyCoordinates.end(), coordinatesOfCurrentShip.begin(), coordinatesOfCurrentShip.end() );

        coordinatesOfCurrentShip.clear();
    }

    for (fourDeckIter = Navy::fourDeckShips_.begin(); fourDeckIter != Navy::fourDeckShips_.end(); ++fourDeckIter)
    {
        coordinatesOfCurrentShip = (*fourDeckIter).getCoordinates();

        navyCoordinates.insert( navyCoordinates.end(), coordinatesOfCurrentShip.begin(), coordinatesOfCurrentShip.end() );

        coordinatesOfCurrentShip.clear();
    }

    return navyCoordinates;
}

void Navy::setShootToPipe(int x, int y)
{
    std::vector<OneDeckShip>::iterator oneDeckIter;

    std::vector<TwoDeckShip>::iterator twoDeckIter;

    std::vector<ThreeDeckShip>::iterator threeDeckIter;

    std::vector<FourDeckShip>::iterator fourDeckIter;


    for (oneDeckIter = Navy::oneDeckShips_.begin(); oneDeckIter != Navy::oneDeckShips_.end(); ++oneDeckIter)
    {
        (*oneDeckIter).setDeadPart(x, y);
    }

    for (twoDeckIter = Navy::twoDeckShips_.begin(); twoDeckIter != Navy::twoDeckShips_.end(); ++twoDeckIter)
    {
        (*twoDeckIter).setDeadPart(x, y);
    }

    for (threeDeckIter = Navy::threeDeckShips_.begin(); threeDeckIter != Navy::threeDeckShips_.end(); ++threeDeckIter)
    {
        (*threeDeckIter).setDeadPart(x, y);
    }

    for (fourDeckIter = Navy::fourDeckShips_.begin(); fourDeckIter != Navy::fourDeckShips_.end(); ++fourDeckIter)
    {
        (*fourDeckIter).setDeadPart(x, y);
    }
}
