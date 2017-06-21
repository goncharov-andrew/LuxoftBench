#ifndef MAP_H
#define MAP_H

#include <mapsymbols.h>
#include <navy.h>

#include <constants.h>

class Map
{
public:

    Map();

    Map(Navy& navy);

    Map& operator = (const Map& right);

    void setPipeShoot(int x, int y);

    void setEmptyShoot(int x, int y);

    char getField(int x, int y);

    const char** getMap();

private:

    MapSymbols mapsymbols_;

    char** map_;
};

#endif // MAP_H
