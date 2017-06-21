#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>


#include <map.h>

#include <navy.h>

#include <getcoordinatestrategy.h>

class Player
{
public:
    Player(Map& playerMap, Map& enemyMap, Navy& navy, GetCoordinatesStrategy* getCoordinatesStrategy);

    int getNumberOfAliveShips();

    int getNumberOfDeadShips();

    int setEnemyShoot(int x, int y);

    void setResultOfOwnShoot(int x, int y, bool result);

    Map& getEnemyMap();

    Map& getPlayerMap();

    std::pair<int, int> getShootingCoordinates();

private:

    Map enemyMap_;

    Map playerMap_;

    Navy navy_;

    GetCoordinatesStrategy* getCoordinatesStrategy_;
};

#endif // PLAYER_H
