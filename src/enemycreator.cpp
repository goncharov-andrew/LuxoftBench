#include "enemycreator.h"

EnemyCreator::EnemyCreator()
{

}

Player* EnemyCreator::createPlayer()
{
    NavyBuilder* navyBuilder = new NavyBuilder();

    Navy* navy = navyBuilder->buildNavy();

    Map* playerMap = new Map(navy);

    Map* enemyMap = new Map();

    GetCoordinatesStrategy* playerCoordinateStrategy = new GetEnemyCoordinatesStrategy();

    Player* humanPlayer = new Player(playerMap, enemyMap, navy, playerCoordinateStrategy);

    return humanPlayer;
}
