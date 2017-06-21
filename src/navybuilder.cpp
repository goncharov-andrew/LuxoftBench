#include "navybuilder.h"

NavyBuilder::NavyBuilder()
{
    createCoordinates = new CreateCoordinates();
}

std::vector<OneDeckShip*> NavyBuilder::buildOneDeckShips()
{
    std::vector<OneDeckShip*> oneDeckShips;

    for (int i = 0; i < 4; ++i)
    {
        oneDeckShips.push_back(new OneDeckShip);
    }

    return oneDeckShips;
}

std::vector<TwoDeckShip*> NavyBuilder::buildTwoDeckShips()
{
    std::vector<TwoDeckShip*> twoDeckShips;

    for (int i = 0; i < 3; ++i)
    {
        twoDeckShips.push_back(new TwoDeckShip);
    }

    return twoDeckShips;
}

std::vector<ThreeDeckShip*> NavyBuilder::buildThreeDeckShips()
{
    std::vector<ThreeDeckShip*> threeDeckShips;

    for (int i = 0; i < 2; ++i)
    {
        threeDeckShips.push_back(new ThreeDeckShip);
    }

    return threeDeckShips;
}

std::vector<FourDeckShip*> NavyBuilder::buildFourDeckShips()
{
    std::vector<FourDeckShip*> fourDeckShips;


    fourDeckShips.push_back(new FourDeckShip);


    return fourDeckShips;
}

Navy* NavyBuilder::buildNavy()
{
    std::vector<OneDeckShip*> oneDeckShips = NavyBuilder::buildOneDeckShips();

    std::vector<TwoDeckShip*> twoDeckShips = NavyBuilder::buildTwoDeckShips();

    std::vector<ThreeDeckShip*> threeDeckShips = NavyBuilder::buildThreeDeckShips();

    std::vector<FourDeckShip*> fourDeckShips = NavyBuilder::buildFourDeckShips();


    std::stack<std::stack<std::pair<int, int>>> oneDeckCoordinates = createCoordinates->getOneDeckCoordinates();

    std::stack<std::stack<std::pair<int, int>>> twoDeckCoordinates = createCoordinates->getTwoDeckCoordinates();

    std::stack<std::stack<std::pair<int, int>>> threeDeckCoordinates = createCoordinates->getThreeDeckCoordinates();

    std::stack<std::stack<std::pair<int, int>>> fourDeckCoordinates = createCoordinates->getFourDeckCoordinates();



    std::vector<OneDeckShip*>::iterator oneDeckShipIter;

    for(oneDeckShipIter = oneDeckShips.begin(); oneDeckShipIter != oneDeckShips.end(); ++oneDeckShipIter)
    {
        (*oneDeckShipIter)->setCoordinates(oneDeckCoordinates.top());

        oneDeckCoordinates.pop();
    }

    std::vector<TwoDeckShip*>::iterator twoDeckShipIter;

    for(twoDeckShipIter = twoDeckShips.begin(); twoDeckShipIter != twoDeckShips.end(); ++twoDeckShipIter)
    {
        (*twoDeckShipIter)->setCoordinates(twoDeckCoordinates.top());

        twoDeckCoordinates.pop();
    }

    std::vector<ThreeDeckShip*>::iterator threeDeckShipIter;

    for(threeDeckShipIter = threeDeckShips.begin(); threeDeckShipIter != threeDeckShips.end(); ++threeDeckShipIter)
    {
        (*threeDeckShipIter)->setCoordinates(threeDeckCoordinates.top());

        threeDeckCoordinates.pop();
    }

    std::vector<FourDeckShip*>::iterator fourDeckShipIter;

    for(fourDeckShipIter = fourDeckShips.begin(); fourDeckShipIter != fourDeckShips.end(); ++fourDeckShipIter)
    {
        (*fourDeckShipIter)->setCoordinates(fourDeckCoordinates.top());

        fourDeckCoordinates.pop();
    }


    return new Navy(oneDeckShips, twoDeckShips, threeDeckShips, fourDeckShips);
}
