#ifndef HUMANCREATOR_H
#define HUMANCREATOR_H

#include "playercreator.h"

#include "getplayercoordinatesstrategy.h"

#include "navybuilder.h"

class HumanCreator : public PlayerCreator
{
public:
    HumanCreator();

    Player* createPlayer();
};

#endif // HUMANCREATOR_H
