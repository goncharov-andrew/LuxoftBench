#include "game.h"

Game::Game()
{
    PlayerCreator* humanPlayerCreator = new HumanCreator();

    PlayerCreator* enemyPlayerCreator = new EnemyCreator();

    enemy_ = enemyPlayerCreator->createPlayer();

    human_ = humanPlayerCreator->createPlayer();
}

void Game::showMaps(Player* player)
{
    char** PlayerMapForShow = player->getPlayerMap().getMap();

    char** EnemyMapForShow = player->getEnemyMap().getMap();

    std::cout << "Player map:" << "\t\t\t\t" << "Enemy map:" << std::endl << std::endl;

    for(int i = 0; i < SIZE_OF_MAP; ++i)
    {
        for(int j = 0; j < SIZE_OF_MAP; ++j)
        {
            std:: cout << PlayerMapForShow[i][j] << " ";
        }

        std::cout << "\t\t\t";

        for(int j = 0; j < SIZE_OF_MAP; ++j)
        {
            std::cout << EnemyMapForShow[i][j] << " ";
        }

        std::cout << std::endl;
    }

    std::cout << std::endl;
}

void Game::showStatistics()
{
    double durationOfGame = ( timeEnd_ - timeBegin_ ) / static_cast<double>(CLOCKS_PER_SEC);

    int numberOfAlivePlayerShips = human_->getNumberOfAliveShips();

    int numberOfDeadEnemyShips = enemy_->getNumberOfDeadShips();



    std::cout << "STATISTICS: " << std::endl << std::endl;

    std::cout << "Game time: " << durationOfGame << std::endl << std::endl;

    std::cout << "Number of alive ships: " << numberOfAlivePlayerShips << std::endl << std::endl;

    std::cout << "Number of killed ships: " << numberOfDeadEnemyShips << std::endl << std::endl;
}

void Game::startGame()
{
    std::pair<int, int> shootingCoordinates;

    int resultOfShoot = -1;

    system ("cls");

    timeBegin_ = std::clock();


    while(true)
    {
        while(true)
        {
            if(resultOfShoot == 1)
            {
                human_->setResultOfOwnShoot(shootingCoordinates.first, shootingCoordinates.second, true);

                showMaps(human_);

                std::cout << "HIT" << std::endl;


            }
            else if(resultOfShoot == 0)
            {
                human_->setResultOfOwnShoot(shootingCoordinates.first, shootingCoordinates.second, false);

                showMaps(human_);

                std::cout << "FAIL" << std::endl;

                break;
            }
            else if(resultOfShoot == -1)
            {
                showMaps(human_);
            }

            shootingCoordinates = human_->getShootingCoordinates();

            resultOfShoot = enemy_->setEnemyShoot(shootingCoordinates.first, shootingCoordinates.second);

            system ("cls");
        }

        resultOfShoot = -1;

        if(enemy_->getNumberOfDeadShips() == 10)
        {
            std::cout << "You win!" << std::endl;

            break;
        }

        while(true)
        {
            showMaps(enemy_);

            if(resultOfShoot == 1)
            {
                enemy_->setResultOfOwnShoot(shootingCoordinates.first, shootingCoordinates.second, true);
            }
            else if(resultOfShoot == 0)
            {
                human_->setResultOfOwnShoot(shootingCoordinates.first, shootingCoordinates.second, false);

                break;
            }
            else if(resultOfShoot == -1)
            {
            }

            shootingCoordinates = enemy_->getShootingCoordinates();

            resultOfShoot = human_->setEnemyShoot(shootingCoordinates.first, shootingCoordinates.second);

            system ("cls");
        }

        resultOfShoot = -1;

        if(human_->getNumberOfDeadShips() == 10)
        {
            std::cout << "You lose!" << std::endl;

            break;
        }
    }

    timeEnd_ = std::clock();

    showStatistics();

    std::cout << "Please, enter some key for exit" << std::endl;

    getchar();
}
