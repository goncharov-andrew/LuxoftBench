#include "map.h"

Map::Map()
{
    map_ = new char* [SIZE_OF_MAP];

    for (int i = 0; i < SIZE_OF_MAP; ++i)
    {
        map_[i] = new char[SIZE_OF_MAP];
    }

    for (int i = 0; i < SIZE_OF_MAP; ++i)
    {
        for (int j = 0; j < SIZE_OF_MAP; ++j)
        {
            map_[i][j] = mapsymbols_.EMPTY;
        }
    }

}

Map::Map(Navy& navy)
{
    map_ = new char* [SIZE_OF_MAP];

    for (int i = 0; i < SIZE_OF_MAP; ++i)
    {
        map_[i] = new char[SIZE_OF_MAP];
    }

    for (int i = 0; i < SIZE_OF_MAP; ++i)
    {
        for (int j = 0; j < SIZE_OF_MAP; ++j)
        {
            map_[i][j] = mapsymbols_.EMPTY;
        }
    }

    std::vector<std::pair<int, int> > navyCoordinates = navy.getNavyCoordinates();

    std::vector<std::pair<int, int>>::iterator navyCoordIter;

    int currentString = 0;
    int currentColumn = 0;

    for (navyCoordIter = navyCoordinates.begin(); navyCoordIter != navyCoordinates.end(); ++navyCoordIter)
    {
        currentString = (*navyCoordIter).first;
        currentColumn = (*navyCoordIter).second;

        bool isRightStringCoordinate = currentString >= 0 && currentString <= 9;

        bool isRightColumnCoordinate = currentColumn >= 0 && currentColumn <= 9;

        if(isRightStringCoordinate && isRightColumnCoordinate)
        {
            map_[currentString][currentColumn] = mapsymbols_.PIPE;
        }
        else
        {

        }
    }

    navyCoordinates.clear();
}

void Map::setPipeShoot(int x, int y)
{
    map_[x][y] = mapsymbols_.BLASTED_PIPE;
}

void Map::setEmptyShoot(int x, int y)
{
    map_[x][y] = mapsymbols_.BLASTED_EMPTY;
}

Map& Map::operator=(const Map& right)
{
     if (this == &right)
     {
        return *this;
     }

     this->map_ = new char* [SIZE_OF_MAP];

     for (int i = 0; i < SIZE_OF_MAP; ++i)
     {
         this->map_[i] = new char[SIZE_OF_MAP];
     }

     for (int i = 0; i < SIZE_OF_MAP; ++i)
     {
         for (int j = 0; j < SIZE_OF_MAP; ++j)
         {
             this->map_[i][j] = right.map_[i][j];
         }
     }

     return *this;
}
