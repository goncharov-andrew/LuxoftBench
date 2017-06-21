#include "navy.h"

Navy::Navy(std::vector<OneDeckShip*> oneDeckShips,
           std::vector<TwoDeckShip*> twoDeckShips,
           std::vector<ThreeDeckShip*> threeDeckShips,
           std::vector<FourDeckShip*> fourDeckShips)
{
    oneDeckShips_ = oneDeckShips;
    twoDeckShips_ = twoDeckShips;
    threeDeckShips_ = threeDeckShips;
    fourDeckShips_ = fourDeckShips;
}

std::vector<std::pair<int, int>> Navy::getNavyCoordinates()
{
    std::vector<std::pair<int, int>> navyCoordinates;

    std::vector<std::pair<int, int>> coordinatesOfCurrentShip;

    std::vector<OneDeckShip*>::iterator oneDeckIter;

    std::vector<TwoDeckShip*>::iterator twoDeckIter;

    std::vector<ThreeDeckShip*>::iterator threeDeckIter;

    std::vector<FourDeckShip*>::iterator fourDeckIter;


    for (oneDeckIter = Navy::oneDeckShips_.begin(); oneDeckIter != Navy::oneDeckShips_.end(); ++oneDeckIter)
    {
        coordinatesOfCurrentShip = (*oneDeckIter)->getCoordinates();

        navyCoordinates.insert( navyCoordinates.end(), coordinatesOfCurrentShip.begin(), coordinatesOfCurrentShip.end() );

        coordinatesOfCurrentShip.clear();
    }

    for (twoDeckIter = Navy::twoDeckShips_.begin(); twoDeckIter != Navy::twoDeckShips_.end(); ++twoDeckIter)
    {
        coordinatesOfCurrentShip = (*twoDeckIter)->getCoordinates();

        navyCoordinates.insert( navyCoordinates.end(), coordinatesOfCurrentShip.begin(), coordinatesOfCurrentShip.end() );

        coordinatesOfCurrentShip.clear();
    }

    for (threeDeckIter = Navy::threeDeckShips_.begin(); threeDeckIter != Navy::threeDeckShips_.end(); ++threeDeckIter)
    {
        coordinatesOfCurrentShip = (*threeDeckIter)->getCoordinates();

        navyCoordinates.insert( navyCoordinates.end(), coordinatesOfCurrentShip.begin(), coordinatesOfCurrentShip.end() );

        coordinatesOfCurrentShip.clear();
    }

    for (fourDeckIter = Navy::fourDeckShips_.begin(); fourDeckIter != Navy::fourDeckShips_.end(); ++fourDeckIter)
    {
        coordinatesOfCurrentShip = (*fourDeckIter)->getCoordinates();

        navyCoordinates.insert( navyCoordinates.end(), coordinatesOfCurrentShip.begin(), coordinatesOfCurrentShip.end() );

        coordinatesOfCurrentShip.clear();
    }

    return navyCoordinates;
}
