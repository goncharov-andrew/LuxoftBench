#ifndef PARTOFSHIP_H
#define PARTOFSHIP_H

#include <iostream>
#include <utility>

class PartOfShip
{
public:
    PartOfShip();

    const std::pair<int, int>& getCoordinates();

    void setCoordinates(const std::pair<int, int> coordinates);

    bool getIsAlive();

    void setIsAlive(bool isAlive);

private:

    std::pair<int, int> coordinates_;

    bool isAlive_;
};

#endif // PARTOFSHIP_H
