#include "humancreator.h"

HumanCreator::HumanCreator()
{

}

Player* HumanCreator::createPlayer()
{
    NavyBuilder navyBuilder;

    Navy navy = navyBuilder.buildNavy();

    Map playerMap(navy);

    Map enemyMap;

    GetCoordinatesStrategy* playerCoordinateStrategy = new GetPlayerCoordinatesStrategy();

    Player* humanPlayer = new Player(playerMap, enemyMap, navy, playerCoordinateStrategy);

    return humanPlayer;
}
