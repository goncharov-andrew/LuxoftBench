#include "map.h"

Map::Map()
{
    mapsymbols_ = new MapSymbols();

    map_ = new char* [SIZE_OF_MAP];

    for (int i = 0; i < SIZE_OF_MAP; ++i)
    {
        map_[i] = new char[SIZE_OF_MAP];
    }

    for (int i = 0; i < SIZE_OF_MAP; ++i)
    {
        for (int j = 0; j < SIZE_OF_MAP; ++j)
        {
            map_[i][j] = mapsymbols_->EMPTY;
        }
    }

}

Map::Map(Navy *navy)
{
    mapsymbols_ = new MapSymbols();

    map_ = new char* [SIZE_OF_MAP];

    for (int i = 0; i < SIZE_OF_MAP; ++i)
    {
        map_[i] = new char[SIZE_OF_MAP];
    }

    for (int i = 0; i < SIZE_OF_MAP; ++i)
    {
        for (int j = 0; j < SIZE_OF_MAP; ++j)
        {
            map_[i][j] = mapsymbols_->EMPTY;
        }
    }

    std::vector<std::pair<int, int> > navyCoordinates = navy->getNavyCoordinates();

    std::vector<std::pair<int, int>>::iterator navyCoordIter;

    int currentString = 0;
    int currentColumn = 0;

    for (navyCoordIter = navyCoordinates.begin(); navyCoordIter != navyCoordinates.end(); ++navyCoordIter)
    {
        currentString = (*navyCoordIter).first;
        currentColumn = (*navyCoordIter).second;

        if(currentString >= 0 && currentString <= 9 &&
           currentColumn >= 0 && currentColumn <= 9)
        {
            map_[currentString][currentColumn] = mapsymbols_->PIPE;
        }
        else
        {

        }
    }
}

void Map::setPipeShoot(int x, int y)
{
    map_[x][y] = mapsymbols_->BLASTED_PIPE;
}

void Map::setEmptyShoot(int x, int y)
{
    map_[x][y] = mapsymbols_->BLASTED_EMPTY;
}
