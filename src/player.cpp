#include "player.h"

Player::Player(Map* playerMap, Map* enemyMap, Navy* navy, GetCoordinatesStrategy* getCoordinatesStrategy)
{
    playerMap_ = playerMap;

    navy_ = navy;

    getCoordinatesStrategy_ = getCoordinatesStrategy;

    enemyMap_ = enemyMap;
}

int Player::getNumberOfAliveShips()
{
    return -1;
}

int Player::getNumberOfDeadShips()
{
    return -1;
}

int Player::setEnemyShoot(int x, int y)
{
    return -1;
}

void Player::setResultOfOwnShoot(int x, int y, bool result)
{

}

std::pair<int, int> Player::getSootingCoordinates()
{
    return getCoordinatesStrategy_->GetCoordinates();
}

Map* Player::getEnemyMap()
{
    return playerMap_;
}

Map* Player::getPlayerMap()
{
    return enemyMap_;
}
