#include "game.h"

Game::Game()
{
    PlayerCreator* humanPlayerCreator = new HumanCreator();

    PlayerCreator* enemyPlayerCreator = new EnemyCreator();

    enemy_ = humanPlayerCreator->createPlayer();

    human_ = enemyPlayerCreator->createPlayer();
}

void Game::showMaps(Player* player)
{
    Map PlayerMapForShow = player->getPlayerMap();

    Map EnemyMapForShow = player->getEnemyMap();

    std::cout << "Player map:" << std::endl << std::endl;

    for(int i = 0; i < SIZE_OF_MAP; ++i)
    {
        for(int j = 0; j < SIZE_OF_MAP; ++j)
        {

        }

        std::cout << std::endl;
    }

    std::cout << "Enemy map:" << std::endl << std::endl;

    for(int i = 0; i < SIZE_OF_MAP; ++i)
    {
        for(int j = 0; j < SIZE_OF_MAP; ++j)
        {

        }

        std::cout << std::endl;
    }
}

void Game::showStatistics()
{
    double durationOfGame = ( timeEnd_ - timeBegin_ ) / (double) CLOCKS_PER_SEC;

    int numberOfAlivePlayerShips = human_->getNumberOfAliveShips();

    int numberOfDeadEnemyShips = enemy_->getNumberOfDeadShips();



    std::cout << "STATISTICS: " << std::endl << std::endl;

    std::cout << "Game time: " << durationOfGame << std::endl << std::endl;

    std::cout << "Number of alive ships: " << numberOfAlivePlayerShips << std::endl << std::endl;

    std::cout << "Number of killed ships: " << numberOfDeadEnemyShips << std::endl << std::endl;
}

void Game::startGame()
{

    timeBegin_ = std::clock();

   /* while(true)
    {

    }*/

    timeEnd_ = std::clock();

    showStatistics();

    std::cout << "Please, enter some key for exit" << std::endl;

    getchar();
}
