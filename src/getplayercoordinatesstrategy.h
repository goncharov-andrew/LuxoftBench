#ifndef GETPLAYERCOORDINATESSTRATEGY_H
#define GETPLAYERCOORDINATESSTRATEGY_H

#include <getcoordinatestrategy.h>

class GetPlayerCoordinatesStrategy : public GetCoordinatesStrategy
{
public:
    GetPlayerCoordinatesStrategy();

    std::pair<int, int> GetCoordinates();
};

#endif // GETPLAYERCOORDINATESSTRATEGY_H
