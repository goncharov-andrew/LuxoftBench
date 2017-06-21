#include "getplayercoordinatesstrategy.h"

GetPlayerCoordinatesStrategy::GetPlayerCoordinatesStrategy()
{

}

std::pair<int, int> GetPlayerCoordinatesStrategy::GetCoordinates()
{
    int line = 0;
    int column = 0;

    do
    {
        std::cout << "Enter number of line: " << std::endl;

        line = getchar();

        getchar();

        line = line - 48;


        if(line >= 0 && line <= 9)
        {
            break;
        }

    }while(true);


    do
    {
        std::cout << "Enter number of column: " << std::endl;

        column = getchar();

        getchar();

        column = column - 48;

        if(column >= 0 && column <= 9)
        {
            break;
        }

    }while(true);

    return std::make_pair(line, column);
}
