#ifndef PLAYERCREATOR_H
#define PLAYERCREATOR_H

#include <player.h>


class PlayerCreator
{
public:
    virtual ~PlayerCreator(){}

    virtual Player* createPlayer() = 0;
};

#endif // PLAYERCREATOR_H
