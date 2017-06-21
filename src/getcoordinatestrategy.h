#ifndef GETCOORDINATESTRATEGY_H
#define GETCOORDINATESTRATEGY_H

#include <iostream>

class GetCoordinatesStrategy
{
public:
    virtual ~GetCoordinatesStrategy(){}

    virtual std::pair<int, int> GetCoordinates() = 0;
};

#endif // GETCOORDINATESTRATEGY_H
