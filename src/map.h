#ifndef MAP_H
#define MAP_H

#include "mapsymbols.h"
#include "navy.h"

class Map
{
private:

    MapSymbols* mapsymbols_;

    char** map_;

public:

    const int SIZE_OF_MAP = 10;

    Map();

    Map(Navy *navy);

    void setPipeShoot(int x, int y);

    void setEmptyShoot(int x, int y);

    const char** getMap();
};

#endif // MAP_H
