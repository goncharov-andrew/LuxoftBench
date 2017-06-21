#include "enemycreator.h"

EnemyCreator::EnemyCreator()
{

}

Player* EnemyCreator::createPlayer()
{
    NavyBuilder navyBuilder;

    Navy navy = navyBuilder.buildNavy();

    Map playerMap(navy);

    Map enemyMap;

    GetCoordinatesStrategy* playerCoordinateStrategy = new GetEnemyCoordinatesStrategy();

    Player* humanPlayer = new Player(playerMap, enemyMap, navy, playerCoordinateStrategy);

    return humanPlayer;
}
