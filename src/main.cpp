#include <QCoreApplication>

#include <humancreator.h>
#include <enemycreator.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    PlayerCreator* humanPlayerCreator = new HumanCreator();

    PlayerCreator* enemyPlayerCreator = new EnemyCreator();

    Player* humanPlayer = humanPlayerCreator->createPlayer();

    Player* enemyPlayer = enemyPlayerCreator->createPlayer();

    int c = 10;

    return a.exec();
}
