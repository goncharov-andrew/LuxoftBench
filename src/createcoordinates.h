#ifndef CREATECOORDINATES_H
#define CREATECOORDINATES_H

#include <stdlib.h>
#include <stack>
#include <vector>
#include <algorithm>

class CreateCoordinates
{
public:

    CreateCoordinates();

    std::stack<std::stack<std::pair<int, int>>> getOneDeckCoordinates();

    std::stack<std::stack<std::pair<int, int>>> getTwoDeckCoordinates();

    std::stack<std::stack<std::pair<int, int>>> getThreeDeckCoordinates();

    std::stack<std::stack<std::pair<int, int>>> getFourDeckCoordinates();

private:

    std::stack<std::stack<std::pair<int, int>>> oneDeckCoordinates_;

    std::stack<std::stack<std::pair<int, int>>> twoDeckCoordinates_;

    std::stack<std::stack<std::pair<int, int>>> threeDeckCoordinates_;

    std::stack<std::stack<std::pair<int, int>>> fourDeckCoordinates_;


};

#endif // CREATECOORDINATES_H
