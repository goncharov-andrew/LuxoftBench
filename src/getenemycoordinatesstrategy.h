#ifndef GETENEMYCOORDINATESSTRATEGY_H
#define GETENEMYCOORDINATESSTRATEGY_H

#include <stdlib.h>

#include <getcoordinatestrategy.h>

class GetEnemyCoordinatesStrategy : public GetCoordinatesStrategy
{
public:
    GetEnemyCoordinatesStrategy();

    std::pair<int, int> GetCoordinates();
};

#endif // GETENEMYCOORDINATESSTRATEGY_H
