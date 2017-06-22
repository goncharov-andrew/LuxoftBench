#include "game.h"

Game::Game()
{
    playerCreator_ = new EnemyCreator();

    enemy_ = playerCreator_->createPlayer();

    delete playerCreator_;

    playerCreator_ = new  HumanCreator();

    human_ = playerCreator_->createPlayer();

    delete playerCreator_;
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

void Game::showMessage(int code)
{
    if(code == 1)
    {
        std::cout << "HIT" << std::endl;
    }
    else if(code == 0)
    {
        std::cout << "FAIL" << std::endl;
    }
    else if(code == -1)
    {

    }
}

void Game::showResult(bool result)
{
    if(result == true)
    {
        std::cout << "You win!" << std::endl;
    }
    else
    {
        std::cout << "You lose!" << std::endl;
    }
}

void Game::startGame()
{
    std::pair<int, int> shootingCoordinates;

    bool isHumanStep = true;

    bool isHumanWin = true;

    int resultOfHumanShoot = -1;

    int resultOfEnemyShoot = -1;

    system ("cls");

    timeBegin_ = std::clock();

    while(true)
    {
        if(isHumanStep == true)
        {
            showMaps(human_);

            showMessage(resultOfHumanShoot);

            shootingCoordinates = human_->getShootingCoordinates();

            resultOfHumanShoot = enemy_->setEnemyShoot(shootingCoordinates.first, shootingCoordinates.second);

            if(resultOfHumanShoot == 1)
            {
                human_->setResultOfOwnShoot(shootingCoordinates.first, shootingCoordinates.second, true);


                if(enemy_->getNumberOfDeadShips() == 10)
                {
                    isHumanWin = true;

                    break;
                }

            }
            else if(resultOfHumanShoot == 0)
            {
                human_->setResultOfOwnShoot(shootingCoordinates.first, shootingCoordinates.second, false);

                isHumanStep = false;
            }

            system ("cls");
        }


        if(isHumanStep == false)
        {
            //showMaps(enemy_);

            shootingCoordinates = enemy_->getShootingCoordinates();

            resultOfEnemyShoot = human_->setEnemyShoot(shootingCoordinates.first, shootingCoordinates.second);

            if(resultOfEnemyShoot == 1)
            {
                enemy_->setResultOfOwnShoot(shootingCoordinates.first, shootingCoordinates.second, true);

                if(human_->getNumberOfDeadShips() == 10)
                {
                    isHumanWin = false;

                    break;
                }
            }
            else if(resultOfEnemyShoot == 0)
            {
                enemy_->setResultOfOwnShoot(shootingCoordinates.first, shootingCoordinates.second, false);

                isHumanStep = true;
            }

            system ("cls");
        }
    }

    timeEnd_ = std::clock();

    showResult(isHumanWin);

    showStatistics();

    std::cout << "Please, enter some key for exit" << std::endl;

    getchar();
}
