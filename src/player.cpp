#include "player.h"

Player::Player(Map& playerMap, Map& enemyMap, Navy& navy, GetCoordinatesStrategy* getCoordinatesStrategy)
{
    playerMap_ = playerMap;

    enemyMap_ = enemyMap;

    navy_ = navy;

    getCoordinatesStrategy_ = getCoordinatesStrategy;
}

int Player::getNumberOfAliveShips()
{
    return navy_.getNumberOfAliveShips();
}

int Player::getNumberOfDeadShips()
{
    return navy_.getNumberOfDeadShips();
}

int Player::setEnemyShoot(int x, int y)
{
    int resultOfEnemyShoot = playerMap_.checkField(x, y);

    if(resultOfEnemyShoot == 1)
    {
        navy_.setShootToPipe(x, y);
    }

    return resultOfEnemyShoot;
}

void Player::setResultOfOwnShoot(int x, int y, bool result)
{
    if(result == true)
    {
        enemyMap_.setPipeShoot(x, y);
    }
    else
    {
        enemyMap_.setEmptyShoot(x, y);
    }
}

std::pair<int, int> Player::getShootingCoordinates()
{
    return getCoordinatesStrategy_->GetCoordinates();
}

Map& Player::getEnemyMap()
{
    return enemyMap_;
}

Map& Player::getPlayerMap()
{
    return playerMap_;
}
