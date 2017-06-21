#ifndef GAME_H
#define GAME_H

#include <playercreator.h>
#include <humancreator.h>
#include <enemycreator.h>

#include <time.h>
#include <iostream>


class Game
{
public:
    Game();

    void startGame();

private:

    clock_t timeBegin_;

    clock_t timeEnd_;

    Player* enemy_;

    Player* human_;

    PlayerCreator* playerCreator_;

    void showMaps(Player* player);

    void showMessage(int code);

    void showResult(bool result);

    void showStatistics();
};

#endif // GAME_H
