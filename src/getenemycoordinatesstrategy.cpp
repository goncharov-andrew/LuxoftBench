#include "getenemycoordinatesstrategy.h"

GetEnemyCoordinatesStrategy::GetEnemyCoordinatesStrategy()
{

}

std::pair<int, int> GetEnemyCoordinatesStrategy::GetCoordinates()
{
    int line = rand() % 9;

    int column = rand() % 9;

    return std::make_pair(line, column);
}
