#ifndef GAME_H
#define GAME_H

#include <playercreator.h>

#include <time.h>


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

    void showMaps();

    void showStatistics();


};

#endif // GAME_H
