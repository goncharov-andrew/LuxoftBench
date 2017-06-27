#ifndef NAVY_H
#define NAVY_H

#include <stack>
#include <ctime>

#include "onedeckship.h"
#include "twodeckship.h"
#include "threedeckship.h"
#include "fourdeckship.h"

#include "constants.h"

class Navy
{
public:

    Navy();

    Navy(std::vector<OneDeckShip> oneDeckShips,
         std::vector<TwoDeckShip> twoDeckShips,
         std::vector<ThreeDeckShip> threeDeckShips,
         std::vector<FourDeckShip> fourDeckShips);

    Navy& operator = (const Navy& right);

    void setShootToPipe(int x, int y);

    std::vector<std::pair<int, int> > getNavyCoordinates();

    int getNumberOfAliveShips();

    int getNumberOfDeadShips();

private:

    std::vector<OneDeckShip> oneDeckShips_;

    std::vector<TwoDeckShip> twoDeckShips_;

    std::vector<ThreeDeckShip> threeDeckShips_;

    std::vector<FourDeckShip> fourDeckShips_;
};

#endif // NAVY_H
