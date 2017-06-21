#ifndef NAVYBUILDER_H
#define NAVYBUILDER_H

#include <navy.h>
#include <createcoordinates.h>

class NavyBuilder
{
private:

    std::vector<OneDeckShip*> buildOneDeckShips();

    std::vector<TwoDeckShip*> buildTwoDeckShips();

    std::vector<ThreeDeckShip*> buildThreeDeckShips();

    std::vector<FourDeckShip*> buildFourDeckShips();

    CreateCoordinates* createCoordinates;

public:

    NavyBuilder();

    Navy* buildNavy();
};

#endif // NAVYBUILDER_H
