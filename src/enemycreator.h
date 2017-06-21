#ifndef ENEMYCREATOR_H
#define ENEMYCREATOR_H

#include <playercreator.h>
#include <getenemycoordinatesstrategy.h>
#include <navybuilder.h>

class EnemyCreator : public PlayerCreator
{
public:

   EnemyCreator();

   Player* createPlayer();
};

#endif // ENEMYCREATOR_H
