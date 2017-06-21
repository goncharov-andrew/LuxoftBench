#ifndef PARTOFSHIP_H
#define PARTOFSHIP_H

#include <iostream>
#include <utility>

class PartOfShip
{
public:
    PartOfShip();

    std::pair<int, int> getCoordinates();

    void setCoordinates(std::pair<int, int> coordinates);

    bool getIsAlive();

private:

    std::pair<int, int> coordinates_;

    bool isAlive_;
};

#endif // PARTOFSHIP_H
