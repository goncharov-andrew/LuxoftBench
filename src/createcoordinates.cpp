#include "createcoordinates.h"

CreateCoordinates::CreateCoordinates()
{
    std::vector<int> stringsOfMap;

    for(int i = 0; i < 10; ++i)
    {
        stringsOfMap.push_back(i);
    }


    // fourDeckShips

    std::stack<std::pair<int, int>> coordinatesOfShip;

    int numberStringDeckShip = rand() % (stringsOfMap.size() - 1);

    int numberColumnDeckShip = rand() % 5;

    for(int i = numberColumnDeckShip; i < numberColumnDeckShip + 4; ++i)
    {
        coordinatesOfShip.push( std::make_pair(stringsOfMap[numberStringDeckShip], i) );
    }

    fourDeckCoordinates_.push(coordinatesOfShip);

    stringsOfMap.erase( std::remove(stringsOfMap.begin(), stringsOfMap.end(), stringsOfMap[numberStringDeckShip]) );

    while( coordinatesOfShip.empty() != true )
    {
        coordinatesOfShip.pop();
    }



    //threeDeckShips

    numberStringDeckShip = rand() % (stringsOfMap.size() - 1);

    numberColumnDeckShip = rand() % 2;

    for(int i = numberColumnDeckShip; i < numberColumnDeckShip + 3; ++i)
    {
        coordinatesOfShip.push( std::make_pair(stringsOfMap[numberStringDeckShip], i) );
    }

    threeDeckCoordinates_.push(coordinatesOfShip);

    while( coordinatesOfShip.empty() != true )
    {
        coordinatesOfShip.pop();
    }

    numberColumnDeckShip = numberColumnDeckShip + 4;

    for(int i = numberColumnDeckShip; i < numberColumnDeckShip + 3; ++i)
    {
        coordinatesOfShip.push( std::make_pair(stringsOfMap[numberStringDeckShip], i) );
    }

    threeDeckCoordinates_.push(coordinatesOfShip);

    stringsOfMap.erase( std::remove(stringsOfMap.begin(), stringsOfMap.end(), stringsOfMap[numberStringDeckShip]) );

    while( coordinatesOfShip.empty() != true )
    {
        coordinatesOfShip.pop();
    }



    //twoDeckShips

    for(int i = 0; i < 3; ++i)
    {
        int numberStringTwoDeckShip = rand() % (stringsOfMap.size() - 1);

        int numberColumnTwoDeckShip = rand() % 6;

        for(int i = numberColumnTwoDeckShip; i < numberColumnTwoDeckShip + 2; ++i)
        {
            coordinatesOfShip.push( std::make_pair(stringsOfMap[numberStringTwoDeckShip], i) );
        }

        twoDeckCoordinates_.push(coordinatesOfShip);

        stringsOfMap.erase( std::remove(stringsOfMap.begin(), stringsOfMap.end(), stringsOfMap[numberStringTwoDeckShip]) );

        while( coordinatesOfShip.empty() != true )
        {
            coordinatesOfShip.pop();
        }
    }


    // OneDeckShips

    for(int i = 0; i < 4; ++i)
    {
        int numberStringOneDeckShip = rand() % (stringsOfMap.size() - 1);

        int numberColumnOneDeckShip = rand() % 8;

        coordinatesOfShip.push( std::make_pair(stringsOfMap[numberStringOneDeckShip], numberColumnOneDeckShip) );

        oneDeckCoordinates_.push(coordinatesOfShip);

        stringsOfMap.erase( std::remove(stringsOfMap.begin(), stringsOfMap.end(), stringsOfMap[numberStringOneDeckShip]) );

        while( coordinatesOfShip.empty() != true )
        {
            coordinatesOfShip.pop();
        }
    }
}

std::stack<std::stack<std::pair<int, int>>> CreateCoordinates::getOneDeckCoordinates()
{
    return oneDeckCoordinates_;
}

std::stack<std::stack<std::pair<int, int>>> CreateCoordinates::getTwoDeckCoordinates()
{
    return twoDeckCoordinates_;
}

std::stack<std::stack<std::pair<int, int>>> CreateCoordinates::getThreeDeckCoordinates()
{
    return threeDeckCoordinates_;
}

std::stack<std::stack<std::pair<int, int>>> CreateCoordinates::getFourDeckCoordinates()
{
    return fourDeckCoordinates_;
}
