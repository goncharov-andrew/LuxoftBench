#include <QCoreApplication>

#include <humancreator.h>
#include <enemycreator.h>

#include <game.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Game game;

    game.startGame();

    return a.exec();
}
