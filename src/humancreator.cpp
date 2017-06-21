#include "humancreator.h"

HumanCreator::HumanCreator()
{

}

Player* HumanCreator::createPlayer()
{
    NavyBuilder* navyBuilder = new NavyBuilder();

    Navy* navy = navyBuilder->buildNavy();

    Map* playerMap = new Map(navy);

    Map* enemyMap = new Map();

    GetCoordinatesStrategy* playerCoordinateStrategy = new GetPlayerCoordinatesStrategy();

    Player* humanPlayer = new Player(playerMap, enemyMap, navy, playerCoordinateStrategy);

    return humanPlayer;
}
